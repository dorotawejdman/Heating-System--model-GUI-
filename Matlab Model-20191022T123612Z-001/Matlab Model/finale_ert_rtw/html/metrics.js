function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtDW"] = {file: "E:\\Air\\PKSS\\Matlab Model-20191022T123612Z-001\\Matlab Model\\finale_ert_rtw\\finale.c",
	size: 108};
	 this.metricsArray.var["rtM_"] = {file: "E:\\Air\\PKSS\\Matlab Model-20191022T123612Z-001\\Matlab Model\\finale_ert_rtw\\finale.c",
	size: 835};
	 this.metricsArray.var["rtX"] = {file: "E:\\Air\\PKSS\\Matlab Model-20191022T123612Z-001\\Matlab Model\\finale_ert_rtw\\finale.c",
	size: 96};
	 this.metricsArray.fcn["finale.c:rt_ertODEUpdateContinuousStates"] = {file: "E:\\Air\\PKSS\\Matlab Model-20191022T123612Z-001\\Matlab Model\\finale_ert_rtw\\finale.c",
	stack: 200,
	stackTotal: -1};
	 this.metricsArray.fcn["finale_derivatives"] = {file: "E:\\Air\\PKSS\\Matlab Model-20191022T123612Z-001\\Matlab Model\\finale_ert_rtw\\finale.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["finale_initialize"] = {file: "E:\\Air\\PKSS\\Matlab Model-20191022T123612Z-001\\Matlab Model\\finale_ert_rtw\\finale.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["finale_step"] = {file: "E:\\Air\\PKSS\\Matlab Model-20191022T123612Z-001\\Matlab Model\\finale_ert_rtw\\finale.c",
	stack: 40,
	stackTotal: -1};
	 this.metricsArray.fcn["memcpy"] = {file: "C:\\Program Files\\MATLAB\\R2016a\\sys\\lcc\\include\\string.h",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data;}
}
	 CodeMetrics.instance = new CodeMetrics();
