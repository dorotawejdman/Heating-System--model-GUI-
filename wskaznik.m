clear all;,close all;
t=25;
hold on;
figure(1)
lim=100
%title('wskaznik jakosci')
wynik=zeros(lim,1);
wynik2=zeros(lim,1);
uchyb_kwad=zeros(lim,1);
czas_reg=zeros(lim,1);
przereg=zeros(lim,1);

for kp=1:1:lim
        
a=[kp*2 kp*3];
b=[1 2 1+kp*2 3*kp];
sys=tf(a,b);

y=step(sys,t);
step1=ones(length(y),1);
uchyb=step1-y;
grid on;
time=[0:(25/length(y)):25-(25/length(y))]

%ca³kowy kwadratowy
%uchyb_kwad=zeros(length(y),1);
%---------------------kwadratowe------------------------------------------
for i=1:(length(y))
uchyb_kwad(i)=(uchyb(i))^2;
end
% uchyb_kwad=(uchyb).^2;
wskaznik_kwadrat=trapz(time,uchyb_kwad);
wynik(kp)=wskaznik_kwadrat;
%  plot(wskaznik_kwadrat);

%-------------------------------------z czasem----------------------------
p=2;
q=1;
uchyb_czas=zeros(length(y),1);
czas=zeros(length(y),1);

for i=1:(length(y))
    czas(i)=(t/(length(y))*i)^q;
    uchyb_czas(i)=(abs(uchyb(i)))^p;
    wskaznik_czas(i)=uchyb_czas(i)*czas(i);
end

wskaznik_czas=trapz(time,wskaznik_czas);
wynik2(kp)=wskaznik_czas;

%---------------------------przeregulowanie--------------------------------
%title('przeregulowanie')


y=step(sys,t);
last_y=y(length(y));
maxim=max(y);
przereg(kp)=(max(y)-last_y)/last_y;
    for i=length(y):-1:1
        if (abs(y(i)-last_y)>0.05*last_y) 
            czas_reg(kp)=(i*t)/(length(y));
             break;
        end;
      end
end
wynik=wynik./max(wynik);
wynik2=wynik2./max(wynik2);
kp=1:1:lim;    
hold on;
% % plot(uchyb)
%plot(czas,uchyb_kwad);
plot(kp,wynik);
plot(kp,wynik2);
legend('kwadratowe','z czasem')
%figure(2)
hold on;
grid on;
przereg=przereg./(max(przereg));
czas_reg=czas_reg./(max(czas_reg));
plot(kp,przereg);
plot(kp,czas_reg);
xlabel('kp');
ylabel('wartoœæ wskaŸnika');
legend('kwadratowe','z czasem','przeregulowanie','czas regulacji');
%hold off




clear all;,close all;
t=25;

kp_vec=0.1:0.3:3;
ki_vec=0.1:0.1:1;
wynik_2d=zeros(length(ki_vec),length(kp_vec));
wynik_2d_2=zeros(length(ki_vec),length(kp_vec));
wynik=[];
wynik2=[];
for jj=1:1:length(ki_vec)
        for j=1:1:length(kp_vec)
     
            ki=ki_vec(jj);
            kp=kp_vec(j);

a=[kp ki];
b=[1 2 3 (1+kp) ki];

sys=tf(a,b);
y=step(sys,t);
step1=ones(length(y),1);
uchyb=step1-y;
grid on;
%---------------------kwadratowe------------------------------------------

time=[0:(25/length(y)):25-(25/length(y))];
uchyb_kwad=(uchyb).^2;
wskaznik_kwadrat=trapz(time,uchyb_kwad);
wynik=[wynik wskaznik_kwadrat];

%----------------------z czasem-------------------------------------------
p=2;
q=1;
uchyb_czas=zeros(length(y),1);
czas=zeros(length(y),1);
for i=1:(length(y))
    czas(i)=(t/(length(y))*i)^q;
    uchyb_czas(i)=(abs(uchyb(i)))^p;
    wskaznik_czas(i)=uchyb_czas(i)*czas(i);
end
wskaznik_czas=trapz(time,wskaznik_czas);
wynik2=[wynik2 wskaznik_czas];
        end
end

wynik=wynik./(max(wynik));
wynik2=wynik2./(max(wynik2));

for w=1:length(wynik)
if (wynik(w)==min(wynik)) wsp_min=w;
end
end
max(wynik);
wsp_kp=kp_vec(8);wsp_ki=ki_vec(6);
wsp_kp2=kp_vec(6);wsp_ki2=ki_vec(8);

for k=1:1:length(kp_vec)
        for l=1:1:length(ki_vec)
            wynik_2d(k,l)=wynik(k*l);
            wynik_2d_2(k,l)=wynik2(k*l);
        end
end
figure(1);
hold on;
% plot(time,uchyb);
% plot(time,uchyb_kwad);

[X Y]=meshgrid(kp_vec,ki_vec);
%p=[0.2 0.25 0.3 0.35 0.4 0.45 0.5 0.6 0.7 0.8 0.9 1]
p=[0.2 0.218 0.23  0.25 0.3 0.4 0.5 0.6];

figure(1)
contour(X,Y,wynik_2d,p,'ShowText','on');

xlabel('kp');
ylabel('ki');
figure(2)
min(wynik2)
max(wynik2)
p=[0.045,0.05,0.07,0.09,0.2, 0.3, 0,4,0.5, 0.7,1];

contour(X,Y,wynik_2d_2,p,'ShowText','on');
xlabel('kp');
ylabel('ki');




