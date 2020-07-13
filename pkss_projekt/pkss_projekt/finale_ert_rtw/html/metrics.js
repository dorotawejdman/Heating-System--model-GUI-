function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtDW"] = {file: "D:\\materialy\\7_semestr\\pkss\\finale\\finale_ert_rtw\\finale.c",
	size: 8105};
	 this.metricsArray.var["rtM_"] = {file: "D:\\materialy\\7_semestr\\pkss\\finale\\finale_ert_rtw\\finale.c",
	size: 845};
	 this.metricsArray.var["rtX"] = {file: "D:\\materialy\\7_semestr\\pkss\\finale\\finale_ert_rtw\\finale.c",
	size: 96};
	 this.metricsArray.fcn["finale.c:rt_ertODEUpdateContinuousStates"] = {file: "D:\\materialy\\7_semestr\\pkss\\finale\\finale_ert_rtw\\finale.c",
	stack: 104,
	stackTotal: -1};
	 this.metricsArray.fcn["finale_derivatives"] = {file: "D:\\materialy\\7_semestr\\pkss\\finale\\finale_ert_rtw\\finale.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["finale_initialize"] = {file: "D:\\materialy\\7_semestr\\pkss\\finale\\finale_ert_rtw\\finale.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["finale_step"] = {file: "D:\\materialy\\7_semestr\\pkss\\finale\\finale_ert_rtw\\finale.c",
	stack: 40,
	stackTotal: -1};
	 this.metricsArray.fcn["memcpy"] = {file: "D:\\programy\\Matlab2019b\\sys\\lcc\\include\\string.h",
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
	 return data; }; 
	 this.codeMetricsSummary = '<a href="finale_metrics.html">Global Memory: 9046(bytes) Maximum Stack: 104(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
