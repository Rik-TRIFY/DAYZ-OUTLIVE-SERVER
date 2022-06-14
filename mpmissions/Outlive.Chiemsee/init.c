static Object SpawnObject(string type, vector position, vector orientation)
{
    Object obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);
    if (!obj) {
        Error("Failed to create object " + type);
        return null;
    }

    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetFlags(EntityFlags.STATIC, false);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    } 

    return obj;
}

void main()
{
	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);


// Created Objects
SpawnObject("bldr_mil_fortified_nest_watchtower", "171.357147 425.732178 6565.521973", "113.936470 0.000000 -0.000000");
SpawnObject("Land_Mil_ControlTower", "194.019989 431.941071 6561.297363", "-36.000004 4.102828 -3.589563");
SpawnObject("Land_Mil_Tent_Big4", "155.208038 423.962555 6576.989258", "-71.999947 0.000000 0.000000");
SpawnObject("Land_Mil_Tent_Big3", "137.490005 422.578003 6560.509766", "-163.577988 0.000000 0.000000");
SpawnObject("Land_Container_1Mo", "148.013657 423.528534 6580.229004", "107.999939 6.045276 0.565693");
SpawnObject("Land_Container_1Moh", "141.484299 422.906403 6580.720215", "-99.000038 -5.567549 4.014951");
SpawnObject("bldr_mil_camonet_tent2", "153.531738 424.278992 6565.337402", "17.999807 2.022233 -3.307286");
SpawnObject("Land_Mil_Guardhouse2", "162.044510 419.537964 6506.938477", "179.283966 1.797896 -2.173771");
SpawnObject("Land_Mil_GuardTower", "139.082962 426.773193 6589.630859", "-164.891296 0.000000 -0.000000");
SpawnObject("Land_Mil_GuardTower", "148.025131 423.321228 6511.861816", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks1", "169.005341 424.620941 6537.430176", "-146.374435 0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks1", "161.106659 422.714417 6526.268066", "-143.999893 0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "126.688736 423.372528 6516.287109", "116.999947 0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "127.079384 423.024323 6513.094238", "53.999985 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "129.387024 421.911743 6510.023438", "53.999985 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "131.723541 421.042572 6506.869629", "53.999985 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "134.426590 419.898621 6504.540527", "27.000000 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "138.295990 419.455627 6504.321777", "9.000000 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "142.193939 418.960602 6503.462891", "17.040680 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "146.040222 418.658234 6502.838379", "6.545146 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "150.064438 418.637024 6502.678711", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_Wall_MilCnc_4", "153.850632 418.544159 6503.412109", "-17.999968 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks1", "177.111038 425.371887 6547.601074", "-145.521332 0.000000 -0.000000");
SpawnObject("bldr_wreck_bmp1", "128.575684 422.873352 6537.153809", "-8.999871 0.012543 0.810183");
SpawnObject("bldr_wreck_bmp2", "122.125732 422.999725 6542.624023", "146.491257 0.513115 -1.713764");
SpawnObject("bldr_Wall_CncBarrier_Block", "131.859390 420.706940 6509.407227", "-36.000072 13.176040 -0.943801");
SpawnObject("bldr_Wall_CncBarrier_Block", "133.241577 420.695160 6510.449219", "-36.000034 9.661343 2.679870");
SpawnObject("Land_Mil_GuardTower", "128.386581 426.291321 6525.044434", "53.999985 -0.000000 -0.000000");
SpawnObject("Land_Mil_GuardTower", "203.144424 427.498566 6550.780762", "-52.950855 -0.000000 -0.000000");
SpawnObject("Land_Mil_GuardTower", "121.734596 425.974091 6564.331543", "127.494041 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_spike1", "131.893356 425.230896 6602.620605", "34.152126 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh1", "191.275711 420.684692 6577.892090", "116.999947 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh3", "211.020844 424.306396 6554.187012", "-35.999996 0.000000 0.000000");
SpawnObject("bldr_rock_bright_wallh3", "196.026794 424.863708 6539.829590", "125.999924 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh3", "182.122025 421.941833 6520.599121", "125.999924 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_monolith2", "191.297318 420.480194 6522.325195", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh3", "202.547729 430.371307 6534.384277", "-18.000000 0.000000 0.000000");
SpawnObject("Land_Mil_ControlTower", "218.725082 415.730255 6510.657227", "134.999863 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_monolith1", "249.886078 390.674377 6514.871094", "63.547539 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_spike1", "219.949402 428.726471 6526.917480", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallv", "237.077469 416.371613 6531.132324", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "203.708054 408.593750 6498.199707", "-70.350548 -29.638430 -5.760948");
SpawnObject("bldr_rock_monolith4", "222.218140 405.540924 6506.773438", "0.000000 7.824765 39.051582");
SpawnObject("bldr_rock_monolith4", "225.905457 402.551331 6507.634277", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith4", "229.699997 400.390564 6508.425293", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "233.872086 391.420593 6503.983887", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith4", "226.575394 400.446625 6498.836914", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith4", "222.500259 401.967102 6499.871094", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith4", "222.517075 409.216492 6515.192871", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "237.781738 402.964813 6520.379883", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "230.629761 396.110901 6484.921875", "110.548119 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallv", "195.530396 420.437317 6500.098145", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_apart2", "219.877289 408.847046 6503.185059", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "232.200775 420.178040 6510.563965", "35.999996 -0.000000 -0.000000");
SpawnObject("bldr_rock_spike1", "202.723434 429.040222 6509.270508", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh3", "218.164459 420.492828 6520.146973", "-153.000061 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_apart1", "214.802475 417.260040 6514.984375", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "238.443085 376.384094 6485.567383", "44.999992 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "233.177551 388.830994 6479.024414", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "239.907608 386.672028 6495.046875", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Bunker1_Double", "250.157806 401.045258 6517.692871", "-35.999996 0.000000 0.000000");
SpawnObject("bldr_rock_bright_wallh1", "243.485580 395.709869 6486.293945", "35.999973 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh2", "236.495590 414.301910 6484.766113", "35.999996 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "216.908615 438.560425 6510.975586", "44.999992 -0.000005 179.999893");
SpawnObject("Land_Castle_Wall1_End1", "205.806656 423.743805 6511.036133", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_monolith1", "152.319595 421.790771 6596.232910", "107.999939 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh3", "122.291954 421.182068 6581.635742", "116.999947 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh3", "110.277275 424.364746 6562.021973", "135.000000 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_wallh2", "116.276443 418.541870 6528.784180", "-27.000000 0.000000 0.000000");
SpawnObject("bldr_rock_bright_spike3", "203.728958 423.690735 6531.819336", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_monolith1", "221.819946 422.453522 6548.128418", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_monolith4", "215.502121 430.849060 6536.786621", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_bright_monolith1", "209.319214 421.868591 6543.116699", "27.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith4", "227.763809 400.429382 6491.998047", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "120.797249 422.310150 6551.217773", "89.999954 -0.114181 -2.862396");
SpawnObject("bldr_rock_bright_monolith4", "157.936981 415.863312 6504.365234", "62.999973 -0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks_Round", "142.059174 421.696655 6520.603516", "-144.000031 0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks_Round", "136.720840 421.823303 6524.597656", "-144.000031 0.000000 -0.000000");
SpawnObject("bldr_rock_monolith4", "202.090912 428.668091 6523.953125", "-27.000000 0.000000 0.000000");
SpawnObject("bldr_rock_wallh3", "192.798294 425.693115 6518.632324", "-44.999992 0.000000 0.000000");
SpawnObject("bldr_rock_bright_wallh3", "180.686493 421.905853 6504.270996", "107.999939 0.000000 -0.000000");
SpawnObject("bldr_rock_bright_spike1", "178.491791 422.192566 6508.873047", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "211.754105 402.549866 6474.524902", "-9.000000 0.000000 0.000000");
SpawnObject("bldr_rock_spike2", "198.511490 412.142548 6483.334473", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallv", "128.357391 435.545349 6603.274414", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "168.437454 439.558716 6596.939453", "-53.999985 0.000000 0.000000");
SpawnObject("bldr_rock_wallh2", "213.783737 438.497192 6579.050781", "-35.999996 0.000000 0.000000");
SpawnObject("bldr_rock_wallv", "250.527649 429.943207 6550.029785", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "105.517349 432.900848 6567.960449", "35.999996 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "113.662979 434.031677 6520.616211", "-27.000000 0.000000 0.000000");
SpawnObject("bldr_rock_wallh1", "156.642365 438.128052 6492.496094", "98.999931 0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "215.623871 459.832825 6576.320313", "-27.000000 0.000000 0.000000");
SpawnObject("bldr_rock_wallh2", "164.566467 461.010193 6602.831543", "107.999939 0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "104.366592 452.387238 6570.935547", "18.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "122.858795 456.495911 6514.767090", "-35.999996 0.000000 0.000000");
SpawnObject("bldr_rock_wallh1", "170.294510 454.923706 6489.796387", "80.999954 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "213.116241 458.226379 6520.367676", "27.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh1", "227.105423 448.868347 6534.091797", "27.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith2", "136.364532 421.076508 6541.378418", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "114.598686 455.247559 6551.044922", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "141.130524 460.816528 6593.056152", "71.999947 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith4", "131.163635 420.951813 6575.002441", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh1", "125.020645 460.182159 6553.370605", "-0.000005 -0.000005 -0.000005");
SpawnObject("bldr_rock_wallh2", "136.794205 458.953430 6533.122559", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh1", "151.279327 460.976929 6533.544922", "-171.000107 0.000000 -0.000000");
SpawnObject("bldr_rock_wallh1", "166.669296 456.987274 6531.230469", "-171.000092 0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "183.458557 461.446533 6530.739258", "9.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "198.064240 456.377136 6546.263184", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh1", "210.483612 463.938934 6557.643066", "18.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh1", "158.624649 461.610748 6571.860352", "98.999931 0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "170.334427 464.478607 6589.729492", "80.999924 -0.000000 -0.000000");
SpawnObject("bldr_rock_wallh2", "224.147156 428.761871 6588.011719", "-53.999985 0.000000 0.000000");
SpawnObject("bldr_rock_wallh1", "191.624680 417.703033 6471.845703", "152.999924 -9.786498 -4.523737");
SpawnObject("bldr_rock_wallh1", "110.946381 419.023376 6497.778320", "-53.999985 0.000000 0.000000");
SpawnObject("Land_Mil_GuardShed", "141.576355 416.931122 6499.452148", "-80.999954 0.000000 0.000000");
SpawnObject("bldr_cementworks_silobig1bridge", "208.772949 418.781799 6519.473145", "44.999992 -0.000000 -0.000000");
SpawnObject("bldr_cementworks_silobig1bridge", "200.707031 418.773041 6527.111816", "44.999992 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "208.990921 421.924927 6469.967773", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_rock_monolith1", "212.653366 433.614441 6501.332031", "80.999954 -0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-1.797050 1.468494 -3.884842", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-0.059609 0.885150 0.746938", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "1.998323 1.484104 -1.884754", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-2.467287 0.693744 1.733483", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "1.483752 1.484058 -3.495305", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "2.111773 1.484043 0.409469", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "2.536986 1.069187 3.476604", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "0.894760 1.483371 -3.719224", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-2.122561 0.693744 0.207594", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-2.099194 1.483799 1.338381", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "0.094173 1.069187 0.138130", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "2.095606 1.484973 -2.617485", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "2.182258 0.693744 -2.523047", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-2.221244 1.485035 2.577299", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "2.319625 0.693744 -0.319640", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "1.480632 0.693744 -3.706275", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "1.064049 0.280460 3.728932", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-1.583056 0.280460 1.058841", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "-0.399605 0.280460 -2.572634", "0.000000 0.000000 -0.000000");
SpawnObject("EditorLootPoint", "134.837860 421.705109 6557.645020", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "134.173325 422.509827 6562.653320", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "137.690079 422.402740 6560.828125", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "138.412521 421.706543 6567.223633", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "183.437012 424.642181 6546.928711", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "183.027832 424.341339 6543.670898", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "180.337708 424.642181 6542.443848", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "178.599380 424.070709 6543.985840", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "176.352234 424.642181 6545.016602", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "174.119400 424.642181 6546.314941", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "179.167465 424.642181 6549.316895", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "181.027557 425.325500 6549.506836", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "171.189606 424.642181 6547.137695", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "169.846863 423.426025 6549.141602", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "174.860809 424.642181 6552.372070", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "176.451324 423.542664 6552.475098", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "176.232208 424.050903 6550.728516", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "176.540726 423.426025 6549.614746", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "166.606400 423.429657 6543.322754", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "165.315521 422.675079 6538.963379", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "167.674103 423.886475 6535.575195", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "174.529480 422.675079 6532.829590", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "170.501495 423.891235 6539.457031", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "162.139954 422.675079 6538.354004", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "174.446182 423.287994 6536.443359", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "174.971390 423.590393 6533.516113", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "158.831039 421.984711 6531.266113", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "157.698547 421.984711 6525.287109", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "160.083618 421.984711 6524.344727", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "161.455307 421.984711 6521.678711", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "166.137177 421.992889 6520.191406", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "160.793365 421.413422 6530.454590", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "154.886124 420.768555 6528.389160", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "166.187012 421.984711 6527.688965", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "167.168793 421.984711 6525.268066", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "166.868011 421.683868 6522.224609", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "164.971619 420.768555 6521.991211", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "142.584122 421.830566 6521.719238", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "139.971542 422.501038 6521.723145", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "140.865677 421.409485 6515.190430", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "142.839020 421.001312 6524.883301", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "140.012344 421.814209 6519.680664", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "138.176758 422.213867 6517.368164", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "137.186661 421.870911 6525.631836", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "135.701370 421.538757 6523.596191", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "135.444321 421.132507 6520.858887", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "138.440506 421.805237 6523.806641", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "137.465256 421.128143 6528.542480", "0.000000 0.000000 0.000000");
SpawnObject("EditorLootPoint", "138.065598 421.128387 6527.586914", "0.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks_Round", "322.025055 409.052856 5835.858398", "115.052498 0.000000 -0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "285.119385 386.979584 5928.417480", "-144.000031 0.000000 -0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "245.507477 397.808228 5794.340332", "116.999916 0.000000 -0.000000");
SpawnObject("Land_Mil_ControlTower", "165.505859 405.286346 5782.149902", "-144.000031 0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks_Round", "113.523056 394.715027 5291.896973", "89.999947 -0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks_Round", "113.644562 394.605560 5285.762695", "89.999931 -0.000000 -0.000000");
SpawnObject("Land_Mil_ControlTower", "124.104858 402.144440 5292.479492", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks_Round", "113.344513 394.884583 5298.044434", "89.999954 -0.000000 -0.000000");
SpawnObject("Land_Mil_Tent_Big3", "439.860077 352.735596 4358.810547", "53.999939 -3.775720 6.161255");
SpawnObject("Land_Mil_GuardTower", "432.948334 358.093506 4337.714844", "98.999931 0.000000 -0.000000");
SpawnObject("Land_Mil_GuardTower", "471.096863 353.103333 4362.585449", "161.999832 0.000000 -0.000000");
SpawnObject("Land_Ruin_Mil_ControlTower", "417.803955 355.492554 4373.047852", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Mil_GuardTower", "151.106750 349.937622 3340.509521", "-0.000010 0.000000 0.000000");
SpawnObject("Land_Mil_GuardTower", "24.269688 365.571533 3063.852051", "71.999947 -0.000000 -0.000000");
SpawnObject("Land_Mil_GuardTower", "69.745911 414.950928 2315.127441", "-44.999992 0.000000 0.000000");
SpawnObject("Land_Mil_Airfield_HQ", "742.619019 452.127289 4232.092773", "80.394501 0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks1", "728.486816 449.592468 4208.678711", "-9.000000 0.000000 0.000000");
SpawnObject("Land_Mil_ControlTower", "729.556213 453.411926 4176.863770", "179.999878 0.000000 -0.000000");
SpawnObject("Land_Mil_ControlTower", "787.962158 452.908997 4224.602051", "-62.999973 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks4", "763.635376 448.637726 4232.947266", "91.636719 0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks2", "773.495483 447.607269 4231.986816", "89.999931 -0.000000 -0.000000");
SpawnObject("Land_Tower_TC2_Base", "762.018799 465.635010 4203.826172", "9.000000 -0.000000 -0.000000");
SpawnObject("Land_Tower_TC2_Mid", "761.485535 515.256775 4203.390625", "7.916281 -0.000000 -0.000000");
SpawnObject("Land_Tower_TC2_Top", "761.432922 564.831970 4203.795898", "175.923172 -0.000000 -0.000000");
SpawnObject("ExpansionWreckHmmwv", "746.633362 445.343750 4187.209473", "0.000000 2.120442 8.972235");
SpawnObject("Land_wreck_truck01_aban2_blue", "732.475037 446.880676 4194.375488", "-125.999802 4.491555 -7.248102");
SpawnObject("Wreck_Mi8", "742.582520 448.207123 4211.146484", "-35.999840 5.789387 2.641058");
SpawnObject("Land_Wreck_C130J", "935.102966 396.961212 3845.736816", "0.000000 2.510730 16.995653");
SpawnObject("ExpansionContainer1b", "745.388672 445.411469 4172.241211", "107.999962 -8.926244 -1.074892");
SpawnObject("Land_Container_1Mo", "750.365234 444.705353 4172.554688", "-8.999969 2.724051 8.078559");
SpawnObject("Land_Tisy_RadarPlatform_Top", "760.551147 434.653076 4140.994629", "156.137711 0.000000 -0.000000");
SpawnObject("Land_Mil_ControlTower", "763.952148 449.734131 4130.046387", "66.172348 0.000000 0.000000");
SpawnObject("bldr_Shed_Open_Big_Complete", "309.140503 345.494354 4318.360352", "-96.172890 -0.000000 -0.000000");
SpawnObject("Land_Factory_Small", "316.581696 348.313171 4337.881836", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Workshop5", "345.957672 344.539307 4305.786621", "-80.999954 0.000000 0.000000");
SpawnObject("Land_Workshop2", "350.266541 345.832489 4319.091309", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Workshop1", "296.151672 343.404266 4360.355957", "90.000069 0.000000 -0.000000");
SpawnObject("Land_Workshop2", "332.320831 343.775940 4306.817383", "-71.999947 0.000000 0.000000");
SpawnObject("bldr_plnt_d_PinusSylvestris_fallenc", "340.078125 344.161682 4324.025879", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_plnt_d_piceaabies_stumpb", "345.888153 345.642609 4328.043457", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_plnt_t_naked_1s", "337.095001 346.531128 4290.050293", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_plnt_t_FagusSylvatica_3d", "368.388336 355.696075 4307.905762", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_plnt_t_naked_2s", "341.333130 352.993713 4320.834473", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_House_1W13_Dam", "441.124084 383.761322 6114.487305", "-18.000000 0.000000 0.000000");
SpawnObject("Land_Camp_House_white", "662.382813 353.094696 6295.687500", "135.000015 0.000000 -0.000000");
SpawnObject("Land_Camp_House_white", "656.173096 351.941315 6288.799316", "139.459564 0.000000 -0.000000");
SpawnObject("Land_Camp_House_brown", "666.284302 353.440247 6306.530273", "89.999954 -0.000000 -0.000000");
SpawnObject("Land_Slum_House4", "646.962524 349.618011 6287.262207", "179.999771 0.000000 -0.000000");
SpawnObject("Land_Slum_House6", "638.042053 349.088409 6291.643555", "-135.000015 0.000000 -0.000000");
SpawnObject("Msp_GazeboNew", "642.459839 352.142975 6307.176758", "-80.999954 0.000000 0.000000");
SpawnObject("bldr_prop_Barrel_Green", "657.158386 350.319855 6302.619629", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_fire_barrel", "649.783325 348.565521 6290.980957", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Ruin_Slum_House2", "635.186279 353.077911 6319.532227", "-44.999992 0.000000 0.000000");
SpawnObject("bldr_Misc_DogHouse", "626.831360 351.575256 6308.138184", "16.586723 -0.000000 -0.000000");
SpawnObject("Land_Camp_House_white", "625.248657 353.831085 6313.417480", "-71.999947 0.000000 0.000000");
SpawnObject("Land_Ruin_HouseBig1", "928.973572 424.331024 6786.000977", "-9.000000 0.000000 0.000000");
SpawnObject("Land_Ruin_HouseBig1_Half", "886.169800 424.204712 6926.389648", "-18.000000 0.000000 0.000000");
SpawnObject("Land_Ruin_HouseBig2", "725.106262 388.542572 6869.005859", "161.999863 0.000000 -0.000000");
SpawnObject("Land_Ruin_HouseBig1_NoIvy", "747.540405 387.885895 6851.287109", "107.999939 0.000000 -0.000000");
SpawnObject("Land_Ruin_HouseBig2_Half", "718.677979 389.749725 6907.051758", "80.999954 -0.000000 -0.000000");
SpawnObject("Land_Ruin_HouseBig1_NoIvy_Half", "737.478088 388.123749 6914.922363", "-107.999939 0.000000 -0.000000");
SpawnObject("Land_Ruin_HouseBig2_NoIvy", "756.779114 392.301147 6916.367188", "170.999863 0.000000 -0.000000");
SpawnObject("Land_Ruin_HouseBig1_NoIvy_Half", "764.366760 385.669647 6891.893555", "-9.000000 0.000000 0.000000");
SpawnObject("Land_Ruin_HouseSmall1_NoIvy_Half", "767.161255 383.950714 6866.472656", "-89.306313 -0.000000 -0.000000");
SpawnObject("Land_Ruin_HouseBig3_Half", "718.392090 386.596252 6887.436035", "-99.000015 0.000000 -0.000000");
SpawnObject("Land_House_1W13_Dam", "427.690704 360.881989 6341.214844", "125.999931 0.000000 -0.000000");
SpawnObject("bldr_mil_fortified_nest_watchtower", "553.749207 399.509979 6154.396973", "-153.000061 0.000000 -0.000000");
SpawnObject("Land_Mil_Barracks6", "515.588684 391.747314 5971.381836", "-53.999985 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks_Round", "318.877960 409.342407 5830.278809", "116.999947 0.000000 -0.000000");
SpawnObject("Land_Mil_GuardTower", "245.079773 367.223694 4816.315430", "-71.999947 0.000000 0.000000");
SpawnObject("Land_Mil_GuardTower", "222.400452 368.286285 4822.787109", "98.875046 0.000000 -0.000000");
SpawnObject("Land_Bunker1_Left", "99.068054 412.200653 4684.351074", "-98.999908 0.000000 -0.000000");
SpawnObject("Land_Bunker2_Double", "331.496552 408.631897 4574.512695", "62.999973 -0.000000 -0.000000");
SpawnObject("Land_Bunker1_Left", "86.578651 407.836853 4918.869141", "-107.999992 0.000000 -0.000000");
SpawnObject("Land_Bunker1_Left", "41.112675 450.791382 4778.727539", "179.999878 0.000000 -0.000000");
SpawnObject("Land_Bunker1_Right", "683.712036 386.486633 3654.812012", "-153.000061 0.000000 -0.000000");
SpawnObject("Land_Bunker1_Left", "683.570313 422.954712 3751.894531", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Bunker2_Double", "337.441376 360.960602 4142.798828", "-153.000061 0.000000 -0.000000");
SpawnObject("Land_Bunker2_Left", "129.526642 395.535950 4387.929199", "-17.999937 0.000000 0.000000");
SpawnObject("Land_Bunker2_Double", "440.106934 511.793030 5131.540527", "98.999931 0.000000 -0.000000");
SpawnObject("Land_Bunker2_Left", "713.289612 355.196838 6579.651855", "44.999992 -0.000000 -0.000000");
SpawnObject("Land_Bunker2_Right", "899.499268 418.974365 6661.956543", "44.999886 -0.000000 -0.000000");
SpawnObject("Land_Bunker2_Double", "69.631248 466.144012 7084.163086", "-89.999931 0.000000 0.000000");
SpawnObject("bldr_pier_concrete1_end", "83.032646 373.665131 3803.708740", "79.495346 -0.000000 -0.000000");
SpawnObject("Land_Mil_ATC_Big", "80.361130 412.963837 3807.333984", "81.325974 -0.000000 -0.000000");
SpawnObject("Land_Mil_CamoNet_Roof_east", "86.442627 398.930817 3815.448975", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Mil_Guardhouse2", "112.659973 398.719818 3809.187012", "79.187439 -0.000000 -0.000000");
SpawnObject("Land_Mil_Tent_Big1_1", "95.422035 397.468689 3789.499512", "170.999863 0.000000 -0.000000");
SpawnObject("Land_Mil_Tent_Big1_1", "87.176155 397.478149 3787.872559", "170.999863 0.000000 -0.000000");
SpawnObject("Land_Mil_Tent_Big1_3", "68.203552 397.492004 3784.539063", "168.329300 0.000000 -0.000000");
SpawnObject("Land_Mil_Tent_Big1_2", "77.239006 397.480133 3786.421631", "170.999863 0.000000 -0.000000");
SpawnObject("bldr_bridge_metal_25", "119.602997 389.422516 3811.209961", "-101.685997 0.000000 0.000000");
SpawnObject("bldr_bridge_metal_25_1", "143.067978 388.395996 3816.080078", "78.301102 -5.000000 0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);



	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
		// GetCEApi().ExportProxyData( "5120 0 5120", 10240 );  			// Generate mapgrouppos.xml
		// GetCEApi().ExportClusterData();									// Generate mapgroupcluster.xml
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.25, 0.65 )
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemClothing;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemClothing = player.FindAttachmentBySlotName( "Body" );
		if ( itemClothing )
		{
			SetRandomHealth( itemClothing );
			
			itemEnt = itemClothing.GetInventory().CreateInInventory( "BandageDressing" );
			if ( Class.CastTo( itemBs, itemEnt ) )
				itemBs.SetQuantity( 2 );

			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
			int rndIndex = Math.RandomInt( 0, 4 );
			itemEnt = itemClothing.GetInventory().CreateInInventory( chemlightArray[rndIndex] );
			SetRandomHealth( itemEnt );

			rand = Math.RandomFloatInclusive( 0.0, 1.0 );
			if ( rand < 0.35 )
				itemEnt = player.GetInventory().CreateInInventory( "Apple" );
			else if ( rand > 0.65 )
				itemEnt = player.GetInventory().CreateInInventory( "Pear" );
			else
				itemEnt = player.GetInventory().CreateInInventory( "Plum" );

			SetRandomHealth( itemEnt );
		}
		
		itemClothing = player.FindAttachmentBySlotName( "Legs" );
		if ( itemClothing )
			SetRandomHealth( itemClothing );
		
		itemClothing = player.FindAttachmentBySlotName( "Feet" );
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}