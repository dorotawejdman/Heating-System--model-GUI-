function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:35,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:72,type:"fcn"};
this.def["rtX"] = {file: "finale_c.html",line:38,type:"var"};
this.def["rtDW"] = {file: "finale_c.html",line:41,type:"var"};
this.def["rtM_"] = {file: "finale_c.html",line:44,type:"var"};
this.def["rtM"] = {file: "finale_c.html",line:45,type:"var"};
this.def["rt_ertODEUpdateContinuousStates"] = {file: "finale_c.html",line:54,type:"fcn"};
this.def["finale_step"] = {file: "finale_c.html",line:132,type:"fcn"};
this.def["finale_derivatives"] = {file: "finale_c.html",line:388,type:"fcn"};
this.def["finale_initialize"] = {file: "finale_c.html",line:431,type:"fcn"};
this.def["RT_MODEL"] = {file: "finale_h.html",line:54,type:"type"};
this.def["DW"] = {file: "finale_h.html",line:72,type:"type"};
this.def["X"] = {file: "finale_h.html",line:88,type:"type"};
this.def["XDot"] = {file: "finale_h.html",line:104,type:"type"};
this.def["XDis"] = {file: "finale_h.html",line:120,type:"type"};
this.def["ODE3_IntgData"] = {file: "finale_h.html",line:129,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["finale_c.html"] = "../finale.c";
	this.html2Root["finale_c.html"] = "finale_c.html";
	this.html2SrcPath["finale_h.html"] = "../finale.h";
	this.html2Root["finale_h.html"] = "finale_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","finale_c.html","finale_h.html","rtwtypes_h.html"];
