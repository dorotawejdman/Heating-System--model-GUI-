function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["finale:418"] = "finale.c:202,265";
	/* <Root>/Constant1 */
	this.urlHashMap["finale:268"] = "finale.c:328";
	/* <Root>/Constant5 */
	this.urlHashMap["finale:286"] = "finale.c:196";
	/* <Root>/Gain */
	this.urlHashMap["finale:290"] = "finale.c:345";
	/* <Root>/Product */
	this.urlHashMap["finale:267"] = "finale.c:333";
	/* <Root>/Product1 */
	this.urlHashMap["finale:414"] = "finale.c:195&finale.h:60";
	/* <Root>/Pulse
Generator2 */
	this.urlHashMap["finale:287"] = "finale.c:184,193&finale.h:71";
	/* <Root>/Scope */
	this.urlHashMap["finale:293"] = "msg=rtwMsg_reducedBlock&block=finale:293";
	/* <Root>/Scope1 */
	this.urlHashMap["finale:405"] = "msg=rtwMsg_reducedBlock&block=finale:405";
	/* <Root>/Scope2 */
	this.urlHashMap["finale:407"] = "msg=rtwMsg_reducedBlock&block=finale:407";
	/* <Root>/Scope3 */
	this.urlHashMap["finale:408"] = "msg=rtwMsg_reducedBlock&block=finale:408";
	/* <Root>/Subtract */
	this.urlHashMap["finale:266"] = "finale.c:154,162,169";
	/* <Root>/Sum */
	this.urlHashMap["finale:289"] = "finale.c:353";
	/* <Root>/Sum1 */
	this.urlHashMap["finale:291"] = "finale.c:354";
	/* <S1>/Derivative Gain */
	this.urlHashMap["finale:265:1668"] = "finale.c:151";
	/* <S1>/Filter */
	this.urlHashMap["finale:265:1670"] = "finale.c:153,402,473&finale.h:79,95,111";
	/* <S1>/Filter Coefficient */
	this.urlHashMap["finale:265:1671"] = "finale.c:150&finale.h:58";
	/* <S1>/Integral Gain */
	this.urlHashMap["finale:265:1667"] = "finale.c:160&finale.h:59";
	/* <S1>/Integrator */
	this.urlHashMap["finale:265:1669"] = "finale.c:168,405,476&finale.h:80,96,112";
	/* <S1>/Proportional Gain */
	this.urlHashMap["finale:265:1666"] = "msg=rtwMsg_reducedBlock&block=finale:265:1666";
	/* <S1>/Saturate */
	this.urlHashMap["finale:265:1673"] = "finale.c:174,335";
	/* <S1>/Sum */
	this.urlHashMap["finale:265:1665"] = "finale.c:166";
	/* <S1>/SumD */
	this.urlHashMap["finale:265:1672"] = "finale.c:155";
	/* <S2>/Constant2 */
	this.urlHashMap["finale:276"] = "finale.c:241";
	/* <S2>/Product1 */
	this.urlHashMap["finale:278"] = "finale.c:240";
	/* <S2>/Scope */
	this.urlHashMap["finale:409"] = "msg=rtwMsg_reducedBlock&block=finale:409";
	/* <S2>/Subtract1 */
	this.urlHashMap["finale:275"] = "finale.c:214";
	/* <S3>/Constant2 */
	this.urlHashMap["finale:369"] = "finale.c:304";
	/* <S3>/Product1 */
	this.urlHashMap["finale:399"] = "finale.c:303";
	/* <S3>/Subtract1 */
	this.urlHashMap["finale:400"] = "finale.c:277";
	/* <S5>/Constant1 */
	this.urlHashMap["finale:252"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:252";
	/* <S5>/Gain */
	this.urlHashMap["finale:253"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:253";
	/* <S5>/Subtract2 */
	this.urlHashMap["finale:254"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:254";
	/* <S6>/Constant5 */
	this.urlHashMap["finale:258"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:258";
	/* <S6>/Constant6 */
	this.urlHashMap["finale:259"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:259";
	/* <S6>/Gain1 */
	this.urlHashMap["finale:260"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:260";
	/* <S6>/Saturation */
	this.urlHashMap["finale:261"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:261";
	/* <S6>/Subtract4 */
	this.urlHashMap["finale:262"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:262";
	/* <S6>/wynik - Tzm
 */
	this.urlHashMap["finale:263"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=finale:263";
	/* <S7>/Gain5 */
	this.urlHashMap["finale:189"] = "finale.c:203";
	/* <S7>/Gain6 */
	this.urlHashMap["finale:190"] = "finale.c:204";
	/* <S7>/Gain7 */
	this.urlHashMap["finale:191"] = "finale.c:201&finale.h:61";
	/* <S7>/Subtract6 */
	this.urlHashMap["finale:192"] = "finale.c:207";
	/* <S7>/Tpco-Tr */
	this.urlHashMap["finale:193"] = "finale.c:208";
	/* <S7>/Tr-To */
	this.urlHashMap["finale:194"] = "finale.c:209";
	/* <S7>/wyjscie - Tr */
	this.urlHashMap["finale:195"] = "finale.c:205,215,250,408,479&finale.h:81,97,113";
	/* <S8>/1//MhCh */
	this.urlHashMap["finale:205"] = "finale.c:246&finale.h:63";
	/* <S8>/Gain3 */
	this.urlHashMap["finale:206"] = "finale.c:247";
	/* <S8>/Gain4 */
	this.urlHashMap["finale:207"] = "finale.c:248";
	/* <S8>/Product1 */
	this.urlHashMap["finale:208"] = "finale.c:252";
	/* <S8>/Subtract3 */
	this.urlHashMap["finale:209"] = "finale.c:253";
	/* <S8>/Tpco-Tr */
	this.urlHashMap["finale:210"] = "finale.c:254";
	/* <S8>/Tzco-Tpco */
	this.urlHashMap["finale:211"] = "finale.c:255";
	/* <S8>/wyjscie - Tpco */
	this.urlHashMap["finale:212"] = "finale.c:206,251,351,393,464&finale.h:76,92,108";
	/* <S9>/Derivative Gain */
	this.urlHashMap["finale:277:1668"] = "finale.c:220";
	/* <S9>/Filter */
	this.urlHashMap["finale:277:1670"] = "finale.c:221,414,485&finale.h:83,99,115";
	/* <S9>/Filter Coefficient */
	this.urlHashMap["finale:277:1671"] = "finale.c:219&finale.h:62";
	/* <S9>/Integral Gain */
	this.urlHashMap["finale:277:1667"] = "finale.c:261&finale.h:64";
	/* <S9>/Integrator */
	this.urlHashMap["finale:277:1669"] = "finale.c:227,411,482&finale.h:82,98,114";
	/* <S9>/Proportional Gain */
	this.urlHashMap["finale:277:1666"] = "msg=rtwMsg_reducedBlock&block=finale:277:1666";
	/* <S9>/Saturate */
	this.urlHashMap["finale:277:1673"] = "finale.c:231,242";
	/* <S9>/Sum */
	this.urlHashMap["finale:277:1665"] = "finale.c:226";
	/* <S9>/SumD */
	this.urlHashMap["finale:277:1672"] = "finale.c:222";
	/* <S10>/Gain5 */
	this.urlHashMap["finale:373"] = "finale.c:266";
	/* <S10>/Gain6 */
	this.urlHashMap["finale:374"] = "finale.c:267";
	/* <S10>/Gain7 */
	this.urlHashMap["finale:375"] = "finale.c:264&finale.h:65";
	/* <S10>/Subtract6 */
	this.urlHashMap["finale:376"] = "finale.c:270";
	/* <S10>/Tpco-Tr */
	this.urlHashMap["finale:377"] = "finale.c:271";
	/* <S10>/Tr-To */
	this.urlHashMap["finale:378"] = "finale.c:272";
	/* <S10>/wyjscie - Tr */
	this.urlHashMap["finale:379"] = "finale.c:268,278,312,417,488&finale.h:84,100,116";
	/* <S11>/1//MhCh */
	this.urlHashMap["finale:389"] = "finale.c:309&finale.h:67";
	/* <S11>/Gain3 */
	this.urlHashMap["finale:390"] = "finale.c:310";
	/* <S11>/Gain4 */
	this.urlHashMap["finale:391"] = "finale.c:311";
	/* <S11>/Product1 */
	this.urlHashMap["finale:392"] = "finale.c:315";
	/* <S11>/Subtract3 */
	this.urlHashMap["finale:393"] = "finale.c:316";
	/* <S11>/Tpco-Tr */
	this.urlHashMap["finale:394"] = "finale.c:317";
	/* <S11>/Tzco-Tpco */
	this.urlHashMap["finale:395"] = "finale.c:318";
	/* <S11>/wyjscie - Tpco */
	this.urlHashMap["finale:396"] = "finale.c:269,313,348,396,467&finale.h:77,93,109";
	/* <S12>/Derivative Gain */
	this.urlHashMap["finale:398:1668"] = "finale.c:283";
	/* <S12>/Filter */
	this.urlHashMap["finale:398:1670"] = "finale.c:284,423,494&finale.h:86,102,118";
	/* <S12>/Filter Coefficient */
	this.urlHashMap["finale:398:1671"] = "finale.c:282&finale.h:66";
	/* <S12>/Integral Gain */
	this.urlHashMap["finale:398:1667"] = "finale.c:324&finale.h:68";
	/* <S12>/Integrator */
	this.urlHashMap["finale:398:1669"] = "finale.c:290,420,491&finale.h:85,101,117";
	/* <S12>/Proportional Gain */
	this.urlHashMap["finale:398:1666"] = "msg=rtwMsg_reducedBlock&block=finale:398:1666";
	/* <S12>/Saturate */
	this.urlHashMap["finale:398:1673"] = "finale.c:294,305";
	/* <S12>/Sum */
	this.urlHashMap["finale:398:1665"] = "finale.c:289";
	/* <S12>/SumD */
	this.urlHashMap["finale:398:1672"] = "finale.c:285";
	/* <S13>/Gain */
	this.urlHashMap["finale:218"] = "finale.c:329";
	/* <S13>/Gain1 */
	this.urlHashMap["finale:219"] = "finale.c:330";
	/* <S13>/Gain2 */
	this.urlHashMap["finale:220"] = "finale.c:327&finale.h:69";
	/* <S13>/Product */
	this.urlHashMap["finale:221"] = "finale.c:334";
	/* <S13>/Subtract2 */
	this.urlHashMap["finale:222"] = "finale.c:336";
	/* <S13>/Tpm-Tzco */
	this.urlHashMap["finale:223"] = "finale.c:337";
	/* <S13>/Tzm-Tpm */
	this.urlHashMap["finale:224"] = "finale.c:338";
	/* <S13>/wyjscie-Tpm */
	this.urlHashMap["finale:225"] = "finale.c:331,349,426,497&finale.h:87,103,119";
	/* <S14>/  */
	this.urlHashMap["finale:236"] = "finale.c:346";
	/* <S14>/   */
	this.urlHashMap["finale:237"] = "finale.c:352";
	/* <S14>/    */
	this.urlHashMap["finale:238"] = "finale.c:347";
	/* <S14>/     */
	this.urlHashMap["finale:239"] = "finale.c:355";
	/* <S14>/      */
	this.urlHashMap["finale:240"] = "finale.c:344&finale.h:70";
	/* <S14>/Tpm-Tzco1 */
	this.urlHashMap["finale:241"] = "finale.c:356";
	/* <S14>/Tzco-Tpco */
	this.urlHashMap["finale:242"] = "finale.c:357";
	/* <S14>/wyjscie - Tzco
 */
	this.urlHashMap["finale:243"] = "finale.c:152,161,167,249,314,332,350,399,470&finale.h:78,94,110";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "finale"};
	this.sidHashMap["finale"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "finale:265"};
	this.sidHashMap["finale:265"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "finale:295"};
	this.sidHashMap["finale:295"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "finale:365"};
	this.sidHashMap["finale:365"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "finale:318"};
	this.sidHashMap["finale:318"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "finale:250"};
	this.sidHashMap["finale:250"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "finale:256"};
	this.sidHashMap["finale:256"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "finale:186"};
	this.sidHashMap["finale:186"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "finale:201"};
	this.sidHashMap["finale:201"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<S9>"] = {sid: "finale:277"};
	this.sidHashMap["finale:277"] = {rtwname: "<S9>"};
	this.rtwnameHashMap["<S10>"] = {sid: "finale:370"};
	this.sidHashMap["finale:370"] = {rtwname: "<S10>"};
	this.rtwnameHashMap["<S11>"] = {sid: "finale:385"};
	this.sidHashMap["finale:385"] = {rtwname: "<S11>"};
	this.rtwnameHashMap["<S12>"] = {sid: "finale:398"};
	this.sidHashMap["finale:398"] = {rtwname: "<S12>"};
	this.rtwnameHashMap["<S13>"] = {sid: "finale:214"};
	this.sidHashMap["finale:214"] = {rtwname: "<S13>"};
	this.rtwnameHashMap["<S14>"] = {sid: "finale:232"};
	this.sidHashMap["finale:232"] = {rtwname: "<S14>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "finale:418"};
	this.sidHashMap["finale:418"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "finale:268"};
	this.sidHashMap["finale:268"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Constant5"] = {sid: "finale:286"};
	this.sidHashMap["finale:286"] = {rtwname: "<Root>/Constant5"};
	this.rtwnameHashMap["<Root>/Gain"] = {sid: "finale:290"};
	this.sidHashMap["finale:290"] = {rtwname: "<Root>/Gain"};
	this.rtwnameHashMap["<Root>/Mux"] = {sid: "finale:294"};
	this.sidHashMap["finale:294"] = {rtwname: "<Root>/Mux"};
	this.rtwnameHashMap["<Root>/Mux1"] = {sid: "finale:404"};
	this.sidHashMap["finale:404"] = {rtwname: "<Root>/Mux1"};
	this.rtwnameHashMap["<Root>/Mux2"] = {sid: "finale:406"};
	this.sidHashMap["finale:406"] = {rtwname: "<Root>/Mux2"};
	this.rtwnameHashMap["<Root>/PID Controller1"] = {sid: "finale:265"};
	this.sidHashMap["finale:265"] = {rtwname: "<Root>/PID Controller1"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "finale:267"};
	this.sidHashMap["finale:267"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "finale:414"};
	this.sidHashMap["finale:414"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Pulse Generator2"] = {sid: "finale:287"};
	this.sidHashMap["finale:287"] = {rtwname: "<Root>/Pulse Generator2"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "finale:293"};
	this.sidHashMap["finale:293"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "finale:405"};
	this.sidHashMap["finale:405"] = {rtwname: "<Root>/Scope1"};
	this.rtwnameHashMap["<Root>/Scope2"] = {sid: "finale:407"};
	this.sidHashMap["finale:407"] = {rtwname: "<Root>/Scope2"};
	this.rtwnameHashMap["<Root>/Scope3"] = {sid: "finale:408"};
	this.sidHashMap["finale:408"] = {rtwname: "<Root>/Scope3"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "finale:295"};
	this.sidHashMap["finale:295"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Subsystem1"] = {sid: "finale:365"};
	this.sidHashMap["finale:365"] = {rtwname: "<Root>/Subsystem1"};
	this.rtwnameHashMap["<Root>/Subsystem2"] = {sid: "finale:318"};
	this.sidHashMap["finale:318"] = {rtwname: "<Root>/Subsystem2"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "finale:266"};
	this.sidHashMap["finale:266"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "finale:289"};
	this.sidHashMap["finale:289"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<Root>/Sum1"] = {sid: "finale:291"};
	this.sidHashMap["finale:291"] = {rtwname: "<Root>/Sum1"};
	this.rtwnameHashMap["<Root>/Tzco ref "] = {sid: "finale:250"};
	this.sidHashMap["finale:250"] = {rtwname: "<Root>/Tzco ref "};
	this.rtwnameHashMap["<Root>/Tzm"] = {sid: "finale:256"};
	this.sidHashMap["finale:256"] = {rtwname: "<Root>/Tzm"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "finale:265:1"};
	this.sidHashMap["finale:265:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Derivative Gain"] = {sid: "finale:265:1668"};
	this.sidHashMap["finale:265:1668"] = {rtwname: "<S1>/Derivative Gain"};
	this.rtwnameHashMap["<S1>/Filter"] = {sid: "finale:265:1670"};
	this.sidHashMap["finale:265:1670"] = {rtwname: "<S1>/Filter"};
	this.rtwnameHashMap["<S1>/Filter Coefficient"] = {sid: "finale:265:1671"};
	this.sidHashMap["finale:265:1671"] = {rtwname: "<S1>/Filter Coefficient"};
	this.rtwnameHashMap["<S1>/Integral Gain"] = {sid: "finale:265:1667"};
	this.sidHashMap["finale:265:1667"] = {rtwname: "<S1>/Integral Gain"};
	this.rtwnameHashMap["<S1>/Integrator"] = {sid: "finale:265:1669"};
	this.sidHashMap["finale:265:1669"] = {rtwname: "<S1>/Integrator"};
	this.rtwnameHashMap["<S1>/Proportional Gain"] = {sid: "finale:265:1666"};
	this.sidHashMap["finale:265:1666"] = {rtwname: "<S1>/Proportional Gain"};
	this.rtwnameHashMap["<S1>/Saturate"] = {sid: "finale:265:1673"};
	this.sidHashMap["finale:265:1673"] = {rtwname: "<S1>/Saturate"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "finale:265:1665"};
	this.sidHashMap["finale:265:1665"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/SumD"] = {sid: "finale:265:1672"};
	this.sidHashMap["finale:265:1672"] = {rtwname: "<S1>/SumD"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "finale:265:10"};
	this.sidHashMap["finale:265:10"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "finale:296"};
	this.sidHashMap["finale:296"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/In2"] = {sid: "finale:297"};
	this.sidHashMap["finale:297"] = {rtwname: "<S2>/In2"};
	this.rtwnameHashMap["<S2>/In3"] = {sid: "finale:298"};
	this.sidHashMap["finale:298"] = {rtwname: "<S2>/In3"};
	this.rtwnameHashMap["<S2>/Constant2"] = {sid: "finale:276"};
	this.sidHashMap["finale:276"] = {rtwname: "<S2>/Constant2"};
	this.rtwnameHashMap["<S2>/Model budynku1"] = {sid: "finale:186"};
	this.sidHashMap["finale:186"] = {rtwname: "<S2>/Model budynku1"};
	this.rtwnameHashMap["<S2>/Model kaloryferów1"] = {sid: "finale:201"};
	this.sidHashMap["finale:201"] = {rtwname: "<S2>/Model kaloryferów1"};
	this.rtwnameHashMap["<S2>/PID Controller"] = {sid: "finale:277"};
	this.sidHashMap["finale:277"] = {rtwname: "<S2>/PID Controller"};
	this.rtwnameHashMap["<S2>/Product1"] = {sid: "finale:278"};
	this.sidHashMap["finale:278"] = {rtwname: "<S2>/Product1"};
	this.rtwnameHashMap["<S2>/Scope"] = {sid: "finale:409"};
	this.sidHashMap["finale:409"] = {rtwname: "<S2>/Scope"};
	this.rtwnameHashMap["<S2>/Subtract1"] = {sid: "finale:275"};
	this.sidHashMap["finale:275"] = {rtwname: "<S2>/Subtract1"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "finale:299"};
	this.sidHashMap["finale:299"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S2>/Out2"] = {sid: "finale:300"};
	this.sidHashMap["finale:300"] = {rtwname: "<S2>/Out2"};
	this.rtwnameHashMap["<S2>/Out3"] = {sid: "finale:301"};
	this.sidHashMap["finale:301"] = {rtwname: "<S2>/Out3"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "finale:366"};
	this.sidHashMap["finale:366"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/In2"] = {sid: "finale:367"};
	this.sidHashMap["finale:367"] = {rtwname: "<S3>/In2"};
	this.rtwnameHashMap["<S3>/In3"] = {sid: "finale:368"};
	this.sidHashMap["finale:368"] = {rtwname: "<S3>/In3"};
	this.rtwnameHashMap["<S3>/Constant2"] = {sid: "finale:369"};
	this.sidHashMap["finale:369"] = {rtwname: "<S3>/Constant2"};
	this.rtwnameHashMap["<S3>/Model budynku1"] = {sid: "finale:370"};
	this.sidHashMap["finale:370"] = {rtwname: "<S3>/Model budynku1"};
	this.rtwnameHashMap["<S3>/Model kaloryferów1"] = {sid: "finale:385"};
	this.sidHashMap["finale:385"] = {rtwname: "<S3>/Model kaloryferów1"};
	this.rtwnameHashMap["<S3>/PID Controller"] = {sid: "finale:398"};
	this.sidHashMap["finale:398"] = {rtwname: "<S3>/PID Controller"};
	this.rtwnameHashMap["<S3>/Product1"] = {sid: "finale:399"};
	this.sidHashMap["finale:399"] = {rtwname: "<S3>/Product1"};
	this.rtwnameHashMap["<S3>/Subtract1"] = {sid: "finale:400"};
	this.sidHashMap["finale:400"] = {rtwname: "<S3>/Subtract1"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "finale:401"};
	this.sidHashMap["finale:401"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S3>/Out2"] = {sid: "finale:402"};
	this.sidHashMap["finale:402"] = {rtwname: "<S3>/Out2"};
	this.rtwnameHashMap["<S3>/Out3"] = {sid: "finale:403"};
	this.sidHashMap["finale:403"] = {rtwname: "<S3>/Out3"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "finale:319"};
	this.sidHashMap["finale:319"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/In2"] = {sid: "finale:320"};
	this.sidHashMap["finale:320"] = {rtwname: "<S4>/In2"};
	this.rtwnameHashMap["<S4>/In3"] = {sid: "finale:321"};
	this.sidHashMap["finale:321"] = {rtwname: "<S4>/In3"};
	this.rtwnameHashMap["<S4>/In4"] = {sid: "finale:322"};
	this.sidHashMap["finale:322"] = {rtwname: "<S4>/In4"};
	this.rtwnameHashMap["<S4>/In5"] = {sid: "finale:323"};
	this.sidHashMap["finale:323"] = {rtwname: "<S4>/In5"};
	this.rtwnameHashMap["<S4>/Wymiennik ciepła 1 "] = {sid: "finale:214"};
	this.sidHashMap["finale:214"] = {rtwname: "<S4>/Wymiennik ciepła 1 "};
	this.rtwnameHashMap["<S4>/Wymiennik ciepła 2 "] = {sid: "finale:232"};
	this.sidHashMap["finale:232"] = {rtwname: "<S4>/Wymiennik ciepła 2 "};
	this.rtwnameHashMap["<S4>/Out1"] = {sid: "finale:324"};
	this.sidHashMap["finale:324"] = {rtwname: "<S4>/Out1"};
	this.rtwnameHashMap["<S5>/T0 "] = {sid: "finale:251"};
	this.sidHashMap["finale:251"] = {rtwname: "<S5>/T0 "};
	this.rtwnameHashMap["<S5>/Constant1"] = {sid: "finale:252"};
	this.sidHashMap["finale:252"] = {rtwname: "<S5>/Constant1"};
	this.rtwnameHashMap["<S5>/Gain"] = {sid: "finale:253"};
	this.sidHashMap["finale:253"] = {rtwname: "<S5>/Gain"};
	this.rtwnameHashMap["<S5>/Subtract2"] = {sid: "finale:254"};
	this.sidHashMap["finale:254"] = {rtwname: "<S5>/Subtract2"};
	this.rtwnameHashMap["<S5>/Tzco Ref "] = {sid: "finale:255"};
	this.sidHashMap["finale:255"] = {rtwname: "<S5>/Tzco Ref "};
	this.rtwnameHashMap["<S6>/T0"] = {sid: "finale:257"};
	this.sidHashMap["finale:257"] = {rtwname: "<S6>/T0"};
	this.rtwnameHashMap["<S6>/Constant5"] = {sid: "finale:258"};
	this.sidHashMap["finale:258"] = {rtwname: "<S6>/Constant5"};
	this.rtwnameHashMap["<S6>/Constant6"] = {sid: "finale:259"};
	this.sidHashMap["finale:259"] = {rtwname: "<S6>/Constant6"};
	this.rtwnameHashMap["<S6>/Gain1"] = {sid: "finale:260"};
	this.sidHashMap["finale:260"] = {rtwname: "<S6>/Gain1"};
	this.rtwnameHashMap["<S6>/Saturation"] = {sid: "finale:261"};
	this.sidHashMap["finale:261"] = {rtwname: "<S6>/Saturation"};
	this.rtwnameHashMap["<S6>/Subtract4"] = {sid: "finale:262"};
	this.sidHashMap["finale:262"] = {rtwname: "<S6>/Subtract4"};
	this.rtwnameHashMap["<S6>/wynik - Tzm "] = {sid: "finale:263"};
	this.sidHashMap["finale:263"] = {rtwname: "<S6>/wynik - Tzm "};
	this.rtwnameHashMap["<S6>/Tzm "] = {sid: "finale:264"};
	this.sidHashMap["finale:264"] = {rtwname: "<S6>/Tzm "};
	this.rtwnameHashMap["<S7>/Tpco"] = {sid: "finale:187"};
	this.sidHashMap["finale:187"] = {rtwname: "<S7>/Tpco"};
	this.rtwnameHashMap["<S7>/To"] = {sid: "finale:188"};
	this.sidHashMap["finale:188"] = {rtwname: "<S7>/To"};
	this.rtwnameHashMap["<S7>/Gain5"] = {sid: "finale:189"};
	this.sidHashMap["finale:189"] = {rtwname: "<S7>/Gain5"};
	this.rtwnameHashMap["<S7>/Gain6"] = {sid: "finale:190"};
	this.sidHashMap["finale:190"] = {rtwname: "<S7>/Gain6"};
	this.rtwnameHashMap["<S7>/Gain7"] = {sid: "finale:191"};
	this.sidHashMap["finale:191"] = {rtwname: "<S7>/Gain7"};
	this.rtwnameHashMap["<S7>/Subtract6"] = {sid: "finale:192"};
	this.sidHashMap["finale:192"] = {rtwname: "<S7>/Subtract6"};
	this.rtwnameHashMap["<S7>/Tpco-Tr"] = {sid: "finale:193"};
	this.sidHashMap["finale:193"] = {rtwname: "<S7>/Tpco-Tr"};
	this.rtwnameHashMap["<S7>/Tr-To"] = {sid: "finale:194"};
	this.sidHashMap["finale:194"] = {rtwname: "<S7>/Tr-To"};
	this.rtwnameHashMap["<S7>/wyjscie - Tr"] = {sid: "finale:195"};
	this.sidHashMap["finale:195"] = {rtwname: "<S7>/wyjscie - Tr"};
	this.rtwnameHashMap["<S7>/Tr"] = {sid: "finale:196"};
	this.sidHashMap["finale:196"] = {rtwname: "<S7>/Tr"};
	this.rtwnameHashMap["<S8>/Tzco"] = {sid: "finale:202"};
	this.sidHashMap["finale:202"] = {rtwname: "<S8>/Tzco"};
	this.rtwnameHashMap["<S8>/Fcob"] = {sid: "finale:203"};
	this.sidHashMap["finale:203"] = {rtwname: "<S8>/Fcob"};
	this.rtwnameHashMap["<S8>/Tr"] = {sid: "finale:204"};
	this.sidHashMap["finale:204"] = {rtwname: "<S8>/Tr"};
	this.rtwnameHashMap["<S8>/1//MhCh"] = {sid: "finale:205"};
	this.sidHashMap["finale:205"] = {rtwname: "<S8>/1//MhCh"};
	this.rtwnameHashMap["<S8>/Gain3"] = {sid: "finale:206"};
	this.sidHashMap["finale:206"] = {rtwname: "<S8>/Gain3"};
	this.rtwnameHashMap["<S8>/Gain4"] = {sid: "finale:207"};
	this.sidHashMap["finale:207"] = {rtwname: "<S8>/Gain4"};
	this.rtwnameHashMap["<S8>/Product1"] = {sid: "finale:208"};
	this.sidHashMap["finale:208"] = {rtwname: "<S8>/Product1"};
	this.rtwnameHashMap["<S8>/Subtract3"] = {sid: "finale:209"};
	this.sidHashMap["finale:209"] = {rtwname: "<S8>/Subtract3"};
	this.rtwnameHashMap["<S8>/Tpco-Tr"] = {sid: "finale:210"};
	this.sidHashMap["finale:210"] = {rtwname: "<S8>/Tpco-Tr"};
	this.rtwnameHashMap["<S8>/Tzco-Tpco"] = {sid: "finale:211"};
	this.sidHashMap["finale:211"] = {rtwname: "<S8>/Tzco-Tpco"};
	this.rtwnameHashMap["<S8>/wyjscie - Tpco"] = {sid: "finale:212"};
	this.sidHashMap["finale:212"] = {rtwname: "<S8>/wyjscie - Tpco"};
	this.rtwnameHashMap["<S8>/Tpco "] = {sid: "finale:213"};
	this.sidHashMap["finale:213"] = {rtwname: "<S8>/Tpco "};
	this.rtwnameHashMap["<S9>/u"] = {sid: "finale:277:1"};
	this.sidHashMap["finale:277:1"] = {rtwname: "<S9>/u"};
	this.rtwnameHashMap["<S9>/Derivative Gain"] = {sid: "finale:277:1668"};
	this.sidHashMap["finale:277:1668"] = {rtwname: "<S9>/Derivative Gain"};
	this.rtwnameHashMap["<S9>/Filter"] = {sid: "finale:277:1670"};
	this.sidHashMap["finale:277:1670"] = {rtwname: "<S9>/Filter"};
	this.rtwnameHashMap["<S9>/Filter Coefficient"] = {sid: "finale:277:1671"};
	this.sidHashMap["finale:277:1671"] = {rtwname: "<S9>/Filter Coefficient"};
	this.rtwnameHashMap["<S9>/Integral Gain"] = {sid: "finale:277:1667"};
	this.sidHashMap["finale:277:1667"] = {rtwname: "<S9>/Integral Gain"};
	this.rtwnameHashMap["<S9>/Integrator"] = {sid: "finale:277:1669"};
	this.sidHashMap["finale:277:1669"] = {rtwname: "<S9>/Integrator"};
	this.rtwnameHashMap["<S9>/Proportional Gain"] = {sid: "finale:277:1666"};
	this.sidHashMap["finale:277:1666"] = {rtwname: "<S9>/Proportional Gain"};
	this.rtwnameHashMap["<S9>/Saturate"] = {sid: "finale:277:1673"};
	this.sidHashMap["finale:277:1673"] = {rtwname: "<S9>/Saturate"};
	this.rtwnameHashMap["<S9>/Sum"] = {sid: "finale:277:1665"};
	this.sidHashMap["finale:277:1665"] = {rtwname: "<S9>/Sum"};
	this.rtwnameHashMap["<S9>/SumD"] = {sid: "finale:277:1672"};
	this.sidHashMap["finale:277:1672"] = {rtwname: "<S9>/SumD"};
	this.rtwnameHashMap["<S9>/y"] = {sid: "finale:277:10"};
	this.sidHashMap["finale:277:10"] = {rtwname: "<S9>/y"};
	this.rtwnameHashMap["<S10>/Tpco"] = {sid: "finale:371"};
	this.sidHashMap["finale:371"] = {rtwname: "<S10>/Tpco"};
	this.rtwnameHashMap["<S10>/To"] = {sid: "finale:372"};
	this.sidHashMap["finale:372"] = {rtwname: "<S10>/To"};
	this.rtwnameHashMap["<S10>/Gain5"] = {sid: "finale:373"};
	this.sidHashMap["finale:373"] = {rtwname: "<S10>/Gain5"};
	this.rtwnameHashMap["<S10>/Gain6"] = {sid: "finale:374"};
	this.sidHashMap["finale:374"] = {rtwname: "<S10>/Gain6"};
	this.rtwnameHashMap["<S10>/Gain7"] = {sid: "finale:375"};
	this.sidHashMap["finale:375"] = {rtwname: "<S10>/Gain7"};
	this.rtwnameHashMap["<S10>/Subtract6"] = {sid: "finale:376"};
	this.sidHashMap["finale:376"] = {rtwname: "<S10>/Subtract6"};
	this.rtwnameHashMap["<S10>/Tpco-Tr"] = {sid: "finale:377"};
	this.sidHashMap["finale:377"] = {rtwname: "<S10>/Tpco-Tr"};
	this.rtwnameHashMap["<S10>/Tr-To"] = {sid: "finale:378"};
	this.sidHashMap["finale:378"] = {rtwname: "<S10>/Tr-To"};
	this.rtwnameHashMap["<S10>/wyjscie - Tr"] = {sid: "finale:379"};
	this.sidHashMap["finale:379"] = {rtwname: "<S10>/wyjscie - Tr"};
	this.rtwnameHashMap["<S10>/Tr"] = {sid: "finale:380"};
	this.sidHashMap["finale:380"] = {rtwname: "<S10>/Tr"};
	this.rtwnameHashMap["<S11>/Tzco"] = {sid: "finale:386"};
	this.sidHashMap["finale:386"] = {rtwname: "<S11>/Tzco"};
	this.rtwnameHashMap["<S11>/Fcob"] = {sid: "finale:387"};
	this.sidHashMap["finale:387"] = {rtwname: "<S11>/Fcob"};
	this.rtwnameHashMap["<S11>/Tr"] = {sid: "finale:388"};
	this.sidHashMap["finale:388"] = {rtwname: "<S11>/Tr"};
	this.rtwnameHashMap["<S11>/1//MhCh"] = {sid: "finale:389"};
	this.sidHashMap["finale:389"] = {rtwname: "<S11>/1//MhCh"};
	this.rtwnameHashMap["<S11>/Gain3"] = {sid: "finale:390"};
	this.sidHashMap["finale:390"] = {rtwname: "<S11>/Gain3"};
	this.rtwnameHashMap["<S11>/Gain4"] = {sid: "finale:391"};
	this.sidHashMap["finale:391"] = {rtwname: "<S11>/Gain4"};
	this.rtwnameHashMap["<S11>/Product1"] = {sid: "finale:392"};
	this.sidHashMap["finale:392"] = {rtwname: "<S11>/Product1"};
	this.rtwnameHashMap["<S11>/Subtract3"] = {sid: "finale:393"};
	this.sidHashMap["finale:393"] = {rtwname: "<S11>/Subtract3"};
	this.rtwnameHashMap["<S11>/Tpco-Tr"] = {sid: "finale:394"};
	this.sidHashMap["finale:394"] = {rtwname: "<S11>/Tpco-Tr"};
	this.rtwnameHashMap["<S11>/Tzco-Tpco"] = {sid: "finale:395"};
	this.sidHashMap["finale:395"] = {rtwname: "<S11>/Tzco-Tpco"};
	this.rtwnameHashMap["<S11>/wyjscie - Tpco"] = {sid: "finale:396"};
	this.sidHashMap["finale:396"] = {rtwname: "<S11>/wyjscie - Tpco"};
	this.rtwnameHashMap["<S11>/Tpco "] = {sid: "finale:397"};
	this.sidHashMap["finale:397"] = {rtwname: "<S11>/Tpco "};
	this.rtwnameHashMap["<S12>/u"] = {sid: "finale:398:1"};
	this.sidHashMap["finale:398:1"] = {rtwname: "<S12>/u"};
	this.rtwnameHashMap["<S12>/Derivative Gain"] = {sid: "finale:398:1668"};
	this.sidHashMap["finale:398:1668"] = {rtwname: "<S12>/Derivative Gain"};
	this.rtwnameHashMap["<S12>/Filter"] = {sid: "finale:398:1670"};
	this.sidHashMap["finale:398:1670"] = {rtwname: "<S12>/Filter"};
	this.rtwnameHashMap["<S12>/Filter Coefficient"] = {sid: "finale:398:1671"};
	this.sidHashMap["finale:398:1671"] = {rtwname: "<S12>/Filter Coefficient"};
	this.rtwnameHashMap["<S12>/Integral Gain"] = {sid: "finale:398:1667"};
	this.sidHashMap["finale:398:1667"] = {rtwname: "<S12>/Integral Gain"};
	this.rtwnameHashMap["<S12>/Integrator"] = {sid: "finale:398:1669"};
	this.sidHashMap["finale:398:1669"] = {rtwname: "<S12>/Integrator"};
	this.rtwnameHashMap["<S12>/Proportional Gain"] = {sid: "finale:398:1666"};
	this.sidHashMap["finale:398:1666"] = {rtwname: "<S12>/Proportional Gain"};
	this.rtwnameHashMap["<S12>/Saturate"] = {sid: "finale:398:1673"};
	this.sidHashMap["finale:398:1673"] = {rtwname: "<S12>/Saturate"};
	this.rtwnameHashMap["<S12>/Sum"] = {sid: "finale:398:1665"};
	this.sidHashMap["finale:398:1665"] = {rtwname: "<S12>/Sum"};
	this.rtwnameHashMap["<S12>/SumD"] = {sid: "finale:398:1672"};
	this.sidHashMap["finale:398:1672"] = {rtwname: "<S12>/SumD"};
	this.rtwnameHashMap["<S12>/y"] = {sid: "finale:398:10"};
	this.sidHashMap["finale:398:10"] = {rtwname: "<S12>/y"};
	this.rtwnameHashMap["<S13>/Fzm "] = {sid: "finale:215"};
	this.sidHashMap["finale:215"] = {rtwname: "<S13>/Fzm "};
	this.rtwnameHashMap["<S13>/Tzm"] = {sid: "finale:216"};
	this.sidHashMap["finale:216"] = {rtwname: "<S13>/Tzm"};
	this.rtwnameHashMap["<S13>/Tzco"] = {sid: "finale:217"};
	this.sidHashMap["finale:217"] = {rtwname: "<S13>/Tzco"};
	this.rtwnameHashMap["<S13>/Gain"] = {sid: "finale:218"};
	this.sidHashMap["finale:218"] = {rtwname: "<S13>/Gain"};
	this.rtwnameHashMap["<S13>/Gain1"] = {sid: "finale:219"};
	this.sidHashMap["finale:219"] = {rtwname: "<S13>/Gain1"};
	this.rtwnameHashMap["<S13>/Gain2"] = {sid: "finale:220"};
	this.sidHashMap["finale:220"] = {rtwname: "<S13>/Gain2"};
	this.rtwnameHashMap["<S13>/Product"] = {sid: "finale:221"};
	this.sidHashMap["finale:221"] = {rtwname: "<S13>/Product"};
	this.rtwnameHashMap["<S13>/Subtract2"] = {sid: "finale:222"};
	this.sidHashMap["finale:222"] = {rtwname: "<S13>/Subtract2"};
	this.rtwnameHashMap["<S13>/Tpm-Tzco"] = {sid: "finale:223"};
	this.sidHashMap["finale:223"] = {rtwname: "<S13>/Tpm-Tzco"};
	this.rtwnameHashMap["<S13>/Tzm-Tpm"] = {sid: "finale:224"};
	this.sidHashMap["finale:224"] = {rtwname: "<S13>/Tzm-Tpm"};
	this.rtwnameHashMap["<S13>/wyjscie-Tpm"] = {sid: "finale:225"};
	this.sidHashMap["finale:225"] = {rtwname: "<S13>/wyjscie-Tpm"};
	this.rtwnameHashMap["<S13>/Tpm"] = {sid: "finale:226"};
	this.sidHashMap["finale:226"] = {rtwname: "<S13>/Tpm"};
	this.rtwnameHashMap["<S14>/Fzco "] = {sid: "finale:233"};
	this.sidHashMap["finale:233"] = {rtwname: "<S14>/Fzco "};
	this.rtwnameHashMap["<S14>/Tpco "] = {sid: "finale:234"};
	this.sidHashMap["finale:234"] = {rtwname: "<S14>/Tpco "};
	this.rtwnameHashMap["<S14>/Tpm"] = {sid: "finale:235"};
	this.sidHashMap["finale:235"] = {rtwname: "<S14>/Tpm"};
	this.rtwnameHashMap["<S14>/ "] = {sid: "finale:236"};
	this.sidHashMap["finale:236"] = {rtwname: "<S14>/ "};
	this.rtwnameHashMap["<S14>/  "] = {sid: "finale:237"};
	this.sidHashMap["finale:237"] = {rtwname: "<S14>/  "};
	this.rtwnameHashMap["<S14>/   "] = {sid: "finale:238"};
	this.sidHashMap["finale:238"] = {rtwname: "<S14>/   "};
	this.rtwnameHashMap["<S14>/    "] = {sid: "finale:239"};
	this.sidHashMap["finale:239"] = {rtwname: "<S14>/    "};
	this.rtwnameHashMap["<S14>/     "] = {sid: "finale:240"};
	this.sidHashMap["finale:240"] = {rtwname: "<S14>/     "};
	this.rtwnameHashMap["<S14>/Tpm-Tzco1"] = {sid: "finale:241"};
	this.sidHashMap["finale:241"] = {rtwname: "<S14>/Tpm-Tzco1"};
	this.rtwnameHashMap["<S14>/Tzco-Tpco"] = {sid: "finale:242"};
	this.sidHashMap["finale:242"] = {rtwname: "<S14>/Tzco-Tpco"};
	this.rtwnameHashMap["<S14>/wyjscie - Tzco "] = {sid: "finale:243"};
	this.sidHashMap["finale:243"] = {rtwname: "<S14>/wyjscie - Tzco "};
	this.rtwnameHashMap["<S14>/Tzco"] = {sid: "finale:244"};
	this.sidHashMap["finale:244"] = {rtwname: "<S14>/Tzco"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
