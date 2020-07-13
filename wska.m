uchyb1 = zeros(4035,1)
uchyb2 = zeros(4035,1)
for i=1:(length(Tr1))
    uchyb1(i)=Tr3(i)-TrSP3(i);
    uchyb2(i)=Tr4(i)-TrSP4(i);
    uchyb_kwad(i)=(uchyb(i))^2;
end
t1=1:5:4035*5;
t1=t1';
%wskaznik_kwadrat=trapz(t,uchyb_kwad);

t=0:1:8000000;
t=t';
figure(1)
hold on;
plot(t1,uchyb1)
plot(t1,uchyb2)
figure(2)
hold on;
plot(t,Budynek);
plot(t,Wymiennik);
przeregulowanie=14.5/33*100
przergulowaniebud=5/16*100
%c
przeregulowanie=5/14*100
przergulowaniebudc=5/14*100
legend('bud','wymiennik')
%%
%---------------------------przeregulowanie--------------------------------
%title('przeregulowanie')

y=Tr3
last_y=TrSP3;
maxim=max(y);
przereg=(max(y)-last_y)/last_y;
    for i=length(y):-1:1
        if (abs(y(i)-last_y)>0.10*last_y) 
            czas_reg=(i*t)/(length(y));
             break;
        end;
    end

hold on;
grid on;
przereg=przereg/(max(przereg));
czas_reg=czas_reg/(max(czas_reg));
plot(kp,przereg);
plot(kp,czas_reg);