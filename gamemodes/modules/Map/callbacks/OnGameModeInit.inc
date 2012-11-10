/*!
 * Map/callbacks/OnGameModeInit.inc
 *
 * OnGameModeInit()
 *
 > Priority: 0
 */

{
	// Ship
	
	AddStaticVehicle( 484, 1926.9586, 1515.3867, 8.8138, 15.5080, -1, -1 );
	
	// Not streamed because they're used as spawnpoints
	
	CreateDynamicObject( 8493, 1957.396, 1510.484,   24.975, 0.0, 0.0, -159.141 ); // Pirateship
	CreateDynamicObject( 9159, 1957.351, 1510.507,   24.959, 0.0, 0.0,  200.781 ); // Pirateship Sales & Fence
	CreateDynamicObject( 3886, 1991.424, 1540.095,   11.605, 0.0, 0.0,  293.841 ); // Boardwalk1
	CreateDynamicObject( 3886, 1984.211, 1536.949,   11.580, 0.0, 0.0,  112.577 ); // Boardwalk2
	CreateDynamicObject( 3886, 1962.288, 1527.296,   11.705, 0.0, 0.0,  113.463 ); // Boardwalk3
	CreateDynamicObject( 3886, 1969.436, 1530.477,   11.680, 0.0, 0.0,  293.841 ); // Boardwalk4
	CreateDynamicObject( 1238,  295.700,  -82.400, 1002.675, 0.0, 0.0,    0.000 ); // Boardwalk5
	CreateDynamicObject( 9958, 1933.730, 1493.800,   12.720, 0.0, 0.0,   69.000 ); // Submarine
	
	// Qweerbeet's airport
	
	CreateDynamicObject( 12929, 2773.4287109375, 2671.0085449219, 9.8203125, 0, 0, 90 ); // sw_SHED06
	CreateDynamicObject( 12928, 2773.552734375, 2671.0302734375, 9.8380308151245, 0, 0, 90 ); // sw_shedInterior04
	CreateDynamicObject( 8057, 2804.984375, 2690.912109375, 13.084030151367, 0, 0, 0 ); // hseing01_lvs
	CreateDynamicObject( 8057, 2804.9936523438, 2747.0141601563, 13.084030151367, 0, 0, 0 ); // hseing01_lvs
	CreateDynamicObject( 8546, 2838.5893554688, 2682.6320800781, 12.967000961304, 0, 0, 270 ); // vgsEwrehse02
	CreateDynamicObject( 11089, 2763.6752929688, 2685.0043945313, 13.066871643066, 0, 0, 268 ); // crackfacttanks2_SFS
	CreateDynamicObject( 11293, 2758.3608398438, 2690.1000976563, 15.670093536377, 0, 0, 86 ); // facttanks_SFSe08
	CreateDynamicObject( 3675, 2786.8112792969, 2690.5297851563, 9.6515121459961, 0, 0, 274 ); // laxrf_refinerypipe
	CreateDynamicObject( 3675, 2768.12890625, 2686.9267578125, 11.751392364502, 0, 0, 90 ); // laxrf_refinerypipe
	CreateDynamicObject( 9241, 2835.8403320313, 2685.7958984375, 15.552446365356, 0, 0, 90 ); // copbits_sfn
	CreateDynamicObject( 11292, 2838.634765625, 2700.3840332031, 17.829597473145, 0, 0, 0 ); // gasstatiohut
	CreateDynamicObject( 3287, 2827.9423828125, 2712.6516113281, 14.559358596802, 0, 0, 0 ); // cxrf_oiltank
	CreateDynamicObject( 3643, 2849.88671875, 2691.921875, 21.838439941406, 0, 0, 0 ); // LA_chem_piping
	CreateDynamicObject( 3567, 2760.3513183594, 2672.3264160156, 10.699058532715, 0, 0, 180 ); // lasnfltrail
	CreateDynamicObject( 2934, 2760.2641601563, 2667.1657714844, 13.033520698547, 0, 0, 0 ); // kmb_container_red
	CreateDynamicObject( 2935, 2760.2863769531, 2674.3537597656, 13.033520698547, 0, 0, 0 ); // kmb_container_yel
	CreateDynamicObject( 931, 2760.2978515625, 2678.9050292969, 12.64350605011, 0, 0, 0 ); // RACK3
	CreateDynamicObject( 925, 2842.0568847656, 2701.2778320313, 17.685485839844, 0, 0, 270 ); // RACK2
	CreateDynamicObject( 3932, 2845.11328125, 2667.2634277344, 18.130243301392, 0, 0, 90 ); // hanger
	CreateDynamicObject( 16359, 2852.3449707031, 2671.62890625, 16.365566253662, 0, 0, 0 ); // des_shed3_01
	CreateDynamicObject( 3031, 2851.9750976563, 2674.431640625, 21.534341812134, 0, 0, 242 ); // wong_dish
	CreateDynamicObject( 1775, 2834.9250488281, 2702.0048828125, 17.720617294312, 0, 0, 0 ); // CJ_SPRUNK1
	CreateDynamicObject( 3934, 2835.5302734375, 2678.7490234375, 16.197551727295, 0, 0, 0 ); // helipad01
	CreateDynamicObject( 3934, 2818.8095703125, 2676.41015625, 16.179376602173, 0, 0, 0 ); // helipad01
	CreateDynamicObject( 1215, 2793.7937011719, 2667.3518066406, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2793.8666992188, 2684.5307617188, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2793.8815917969, 2697.2934570313, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2793.8525390625, 2740.6591796875, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2793.7893066406, 2723.4816894531, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2793.8603515625, 2753.171875, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2816.5241699219, 2723.4467773438, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2816.46875, 2740.4848632813, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2816.6525878906, 2753.2778320313, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2816.533203125, 2697.0563964844, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2816.4919433594, 2684.3205566406, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 1215, 2816.4643554688, 2667.7038574219, 15.961890220642, 0, 0, 0 ); // bollardlight
	CreateDynamicObject( 8572, 2786.9792480469, 2679.6374511719, 15.054547309875, 0, 0, 268 ); // vgsSstairs02_lvs
	CreateDynamicObject( 8572, 2786.9658203125, 2683.3974609375, 12.045476913452, 0, 0, 267.99499511719 ); // vgsSstairs02_lvs
	CreateDynamicObject( 16322, 2835.9125976563, 2665.5986328125, 20.421226501465, 0, 0, 0 ); // a51_plat
	CreateDynamicObject( 14397, 2836.73828125, 2680.4892578125, 14.95426940918, 0, 0, 0 ); // girders07
	CreateDynamicObject( 16089, 2840.2849121094, 2671.6169433594, 8.1656627655029, 0, 0, 0 ); // des_pipestrut02
	CreateDynamicObject( 16089, 2840.2680664063, 2686.7265625, 8.1656627655029, 0, 0, 0 ); // des_pipestrut02
	CreateDynamicObject( 16089, 2831.6643066406, 2671.5500488281, 8.1656627655029, 0, 0, 0 ); // des_pipestrut02
	CreateDynamicObject( 16089, 2831.6723632813, 2686.7001953125, 8.1656627655029, 0, 0, 0 ); // des_pipestrut02
	CreateDynamicObject( 930, 2847.28515625, 2664.814453125, 16.841442108154, 0, 0, 0 ); // O2_Bottles
	CreateDynamicObject( 3633, 2842.9509277344, 2665.4963378906, 16.840368270874, 0, 0, 0 ); // imoildrum4_LAS
	CreateDynamicObject( 1998, 2838.0791015625, 2700.9826660156, 16.623580932617, 0, 0, 0 ); // officedesk1l
	CreateDynamicObject( 1688, 2832.5751953125, 2664.0422363281, 17.38835144043, 0, 0, 0 ); // gen_roofbit2
	CreateDynamicObject( 3273, 2835.7788085938, 2664.958984375, 19.537799835205, 0, 260, 270 ); // substa_transf2_
	CreateDynamicObject( 2974, 2835.755859375, 2665.0349121094, 17.668090820313, 0, 0, 270 ); // k_cargo1
	CreateDynamicObject( 984, 2783.9099121094, 2663.2624511719, 10.456992149353, 0, 0, 90 ); // fenceshit2
	CreateDynamicObject( 984, 2783.9091796875, 2663.26171875, 11.699214935303, 0, 0, 90 ); // fenceshit2
	CreateDynamicObject( 984, 2783.9091796875, 2663.26171875, 12.899214744568, 0, 0, 90 ); // fenceshit2
	CreateDynamicObject( 993, 2782.6022949219, 2693.8444824219, 11.434098243713, 0, 0, 0 ); // bar_barrier10
	CreateDynamicObject( 993, 2754.4172363281, 2693.8278808594, 11.434098243713, 0, 0, 0 ); // bar_barrier10
	CreateDynamicObject( 993, 2772.572265625, 2693.8369140625, 11.434098243713, 0, 0, 0 ); // bar_barrier10
	CreateDynamicObject( 993, 2762.58203125, 2693.828125, 11.434098243713, 0, 0, 0 ); // bar_barrier10
	CreateDynamicObject( 8229, 2854.2387695313, 2664.1984863281, 12.521542549133, 0, 0, 168 ); // vgSbikeschl02
	CreateDynamicObject( 8651, 2839.7849121094, 2662.9313964844, 17.267637252808, 0, 0, 270 ); // shbbyhswall07_lvs
	
	CreateDynamicObject( 10824, 1925.7080078125, -479.80078125, 32.649959564209, 0, 0, 84.995727539063 ); // subpen_int_SFSe
	CreateDynamicObject( 10826, 1924.294921875, -478.7587890625, 37.623203277588, 0, 0, 84.995727539063 ); // subpen_ext_SFSe
	CreateDynamicObject( 16663, 1959.3109130859, -543.76440429688, 35.160766601563, 0, 0, 109.99514770508 ); // a51_jetpstuff
	CreateDynamicObject( 4871, 1923.3681640625, -486.095703125, 30.550008773804, 0, 0, 84.990234375 ); // airpurt2bx_las
	CreateDynamicObject( 8171, 1930.5959472656, -470.7526550293, 30.240711212158, 0, 180, 354 ); // vgsSairportland06
	CreateDynamicObject( 16088, 1930.6219482422, -406.39102172852, 22.102876663208, 0, 0, 266 ); // des_pipestrut01
	CreateDynamicObject( 3502, 1956.9111328125, -411.66796875, 32.003776550293, 0, 0, 353.99047851563 ); // vgsN_con_tube
	CreateDynamicObject( 18561, 1923.41796875, -536.7646484375, 21.915336608887, 0, 179.99450683594, 85.995483398438 ); // cS_newbridge
	CreateDynamicObject( 5153, 1931.388671875, -403.67974853516, 22.014614105225, 0, 0, 266 ); // stuntramp7_las2
	CreateDynamicObject( 5153, 1933.5374755859, -403.83276367188, 22.014614105225, 0, 0, 265.99597167969 ); // stuntramp7_las2
	CreateDynamicObject( 5153, 1929.34375, -403.55078125, 22.014614105225, 0, 0, 265.99548339844 ); // stuntramp7_las2
	CreateDynamicObject( 1894, 1934.4599609375, -407.79296875, 20.761293411255, 0, 0, 355.98999023438 ); // garys_luv_ramp
	CreateDynamicObject( 17026, 1956.3525390625, -419.75, 53.607578277588, 0, 0, 233.99780273438 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1853.4324951172, -474.45202636719, 45.817970275879, 0, 0, 163.99182128906 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1892.9013671875, -432.484375, 52.663433074951, 0, 0, 61.990356445313 ); // cunt_rockgp2_
	CreateDynamicObject( 17472, 1973.7014160156, -399.20547485352, 25.829467773438, 0, 0, 328 ); // cunt_rocgxp2_04
	CreateDynamicObject( 17472, 1973.9011230469, -395.90780639648, 25.829467773438, 0, 0, 339.99682617188 ); // cunt_rocgxp2_04
	CreateDynamicObject( 4871, 1886.8525390625, -492.841796875, 30.550008773804, 0, 0, 84.990234375 ); // airpurt2bx_las
	CreateDynamicObject( 3885, 1913.4371337891, -401.31338500977, 31.481735229492, 0, 0, 158 ); // sambase_SFXRF
	CreateDynamicObject( 16662, 1946.8386230469, -551.61828613281, 30.85400390625, 0, 0, 148 ); // a51_radar_stuff
	CreateDynamicObject( 3884, 1913.4296875, -401.0966796875, 31.417352676392, 0, 0, 327.99682617188 ); // samsite_SFXRF
	CreateDynamicObject( 9819, 1948.7700195313, -476.93603515625, 41.008255004883, 0, 0, 178 ); // shpbridge_sfw02
	CreateDynamicObject( 10828, 1884.8767089844, -407.77407836914, 18.16840171814, 0, 180, 354 ); // drydock1_SFSe
	CreateDynamicObject( 10828, 1884.8759765625, -406.216796875, 27.000177383423, 0, 0, 353.99597167969 ); // drydock1_SFSe
	CreateDynamicObject( 901, 1960.181640625, -414.552734375, 39.081130981445, 0, 90, 245.98934936523 ); // searock05
	CreateDynamicObject( 3929, 1955.6232910156, -415.01181030273, 34.496437072754, 0, 0, 154 ); // d_rock
	CreateDynamicObject( 3929, 1955.162109375, -414.962890625, 33.715244293213, 0, 0, 0 ); // d_rock
	CreateDynamicObject( 3929, 1956.0499267578, -415.14559936523, 34.409286499023, 0, 0, 303.99768066406 ); // d_rock
	CreateDynamicObject( 3666, 1946.9230957031, -543.48516845703, 29.058475494385, 0, 0, 0 ); // airuntest_las
	CreateDynamicObject( 16782, 1949.5888671875, -519.814453125, 36.227508544922, 0, 349.99694824219, 211.9921875 ); // a51_radar_scan
	CreateDynamicObject( 8947, 1950.8011474609, -474.71313476563, 37.336925506592, 0, 0, 358 ); // vgElkup
	CreateDynamicObject( 8947, 1952.3173828125, -459.115234375, 37.336097717285, 0, 0, 357.98950195313 ); // vgElkup
	CreateDynamicObject( 12950, 1951.8970947266, -442.91772460938, 37.007858276367, 0, 0, 176 ); // cos_sbanksteps03
	CreateDynamicObject( 3393, 1955.2951660156, -468.90411376953, 40.389640808105, 0, 0, 0 ); // a51_sdsk_ncol4_
	CreateDynamicObject( 3395, 1954.2094726563, -472.53881835938, 40.390468597412, 0, 0, 322 ); // a51_sdsk_3_
	CreateDynamicObject( 16649, 1944.6298828125, -521.220703125, 32.159358978271, 0, 0, 83.995971679688 ); // a51_entstair
	CreateDynamicObject( 8947, 1949.4439697266, -506.60943603516, 29.877109527588, 0, 0, 353.98950195313 ); // vgElkup
	CreateDynamicObject( 8572, 1942.6555175781, -518.16900634766, 33.775581359863, 0, 0, 266 ); // vgsSstairs02_lvs
	CreateDynamicObject( 8169, 1943.2562255859, -524.4638671875, 35.034358978271, 0, 0, 281.99755859375 ); // vgs_guardhseflr
	CreateDynamicObject( 8169, 1947.7705078125, -525.1748046875, 35.034358978271, 0, 0, 281.9970703125 ); // vgs_guardhseflr
	CreateDynamicObject( 8169, 1953.2954101563, -527.00018310547, 35.034358978271, 0, 0, 12 ); // vgs_guardhseflr
	CreateDynamicObject( 8169, 1949.5031738281, -519.62634277344, 35.034358978271, 0, 0, 191.9970703125 ); // vgs_guardhseflr
	CreateDynamicObject( 16095, 1954.2083740234, -526.42950439453, 35.057846069336, 0, 0, 174 ); // des_a51guardbox02
	CreateDynamicObject( 758, 1951.81640625, -523.1826171875, 33.454223632813, 0, 0, 339.99938964844 ); // sm_scrub_rock6
	CreateDynamicObject( 14782, 1879.0166015625, -545.49682617188, 31.673820495605, 0, 0, 175.99548339844 ); // int3int_boxing30
	CreateDynamicObject( 3037, 1947.5498046875, -528.45703125, 34.998901367188, 0, 0, 263.99597167969 ); // warehouse_door2b
	CreateDynamicObject( 3037, 1947.5498046875, -528.427734375, 35.888900756836, 0, 0, 263.99047851563 ); // warehouse_door2b
	CreateDynamicObject( 7017, 1983.0731201172, -519.65942382813, 31.249992370605, 0, 0, 356 ); // circusconstruct07
	CreateDynamicObject( 2665, 1943.5825195313, -518.13061523438, 35.456363677979, 180, 0, 84 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1947.787109375, -517.115234375, 35.456363677979, 179.99450683594, 0, 355.98999023438 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1945.07421875, -516.935546875, 35.456363677979, 0, 0, 355.99548339844 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1943.58203125, -518.1298828125, 35.456363677979, 0, 0, 83.990478515625 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1945.07421875, -516.935546875, 35.456363677979, 179.99450683594, 0, 355.98999023438 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1947.787109375, -517.115234375, 35.456363677979, 0, 0, 355.99548339844 ); // CJ_FF_LIST04
	CreateDynamicObject( 2944, 1951.2961425781, -525.18914794922, 36.529052734375, 0, 0, 356 ); // freight_SFW_door
	CreateDynamicObject( 16782, 1955.376953125, -465.7119140625, 41.529670715332, 0, 0, 177.99499511719 ); // a51_radar_scan
	CreateDynamicObject( 2921, 1957.9697265625, -549.3349609375, 38.627349853516, 0, 0, 0 ); // kmb_cam
	CreateDynamicObject( 2886, 1951.2005615234, -527.03503417969, 36.741077423096, 0, 0, 264 ); // sec_keypad
	CreateDynamicObject( 3396, 1944.4234619141, -527.53332519531, 35.034358978271, 0, 0, 264 ); // a51_sdsk_4_
	CreateDynamicObject( 3394, 1945.7313232422, -517.64038085938, 35.034358978271, 0, 0, 86 ); // a51_sdsk_2_
	CreateDynamicObject( 3395, 1941.7501220703, -522.74169921875, 35.034358978271, 0, 0, 176 ); // a51_sdsk_3_
	CreateDynamicObject( 3384, 1942.1994628906, -525.94891357422, 36.47696685791, 0, 0, 268 ); // a51_halbox_
	CreateDynamicObject( 919, 1945.3364257813, -521.19995117188, 35.450168609619, 0, 0, 354 ); // AIRCON
	CreateDynamicObject( 7191, 1959.626953125, -508.0859375, 34.905330657959, 0, 0, 83.990478515625 ); // vegasNnewfence2b
	CreateDynamicObject( 8674, 1937.845703125, -496.28515625, 32.124687194824, 0, 0, 263.99597167969 ); // csrsfence02_lvs
	CreateDynamicObject( 8674, 1937.845703125, -496.28515625, 33.924686431885, 0, 0, 263.99597167969 ); // csrsfence02_lvs
	CreateDynamicObject( 8674, 1937.845703125, -496.28515625, 31.246871948242, 0, 0, 263.99047851563 ); // csrsfence02_lvs
	CreateDynamicObject( 8674, 1937.845703125, -496.28515625, 33.224685668945, 0, 0, 263.99047851563 ); // csrsfence02_lvs
	CreateDynamicObject( 16151, 1954.4494628906, -458.10391235352, 40.699642181396, 0, 0, 0 ); // ufo_bar
	CreateDynamicObject( 3502, 1864.125, -410.4111328125, 50.451812744141, 0, 0, 353.98498535156 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1863.2763671875, -417.96279907227, 50.35181427002, 0, 90, 353.99041748047 ); // vgsN_con_tube
	CreateDynamicObject( 749, 1862.4213867188, -406.28137207031, 50.000888824463, 0, 0, 0 ); // sm_scrb_column3
	CreateDynamicObject( 758, 1865.5968017578, -407.5305480957, 52.166114807129, 0, 0, 0 ); // sm_scrub_rock6
	CreateDynamicObject( 3929, 1865.0380859375, -408.7890625, 48.378673553467, 0, 0, 0 ); // d_rock
	CreateDynamicObject( 3929, 1865.0380859375, -408.7890625, 47.786735534668, 0, 0, 252 ); // d_rock
	CreateDynamicObject( 701, 1864.4750976563, -405.3532409668, 48.835731506348, 0, 0, 0 ); // sm_tumblewd48p
	CreateDynamicObject( 761, 1864.2822265625, -406.412109375, 49.924713134766, 0, 0, 267.99499511719 ); // sm_drybrush_sm1
	CreateDynamicObject( 702, 1865.166015625, -405.96484375, 49.587554931641, 0, 0, 0 ); // sm_tumbleweed
	CreateDynamicObject( 701, 1865.4937744141, -406.37106323242, 49.598411560059, 0, 0, 0 ); // sm_tumblewd48p
	CreateDynamicObject( 761, 1864.5360107422, -406.52719116211, 48.925140380859, 0, 0, 0 ); // sm_drybrush_sm1
	CreateDynamicObject( 661, 1864.53515625, -428.7705078125, 57.218620300293, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 659, 1864.4038085938, -367.80349731445, 44.823219299316, 0, 0, 0 ); // pinetree01
	CreateDynamicObject( 3929, 1862.7448730469, -404.75036621094, 52.795101165771, 0, 0, 0 ); // d_rock
	CreateDynamicObject( 3929, 1862.2216796875, -404.46875, 52.253723144531, 0, 0, 0 ); // d_rock
	CreateDynamicObject( 3929, 1862.3857421875, -405.00390625, 52.049156188965, 0, 0, 304 ); // d_rock
	CreateDynamicObject( 3502, 1862.7911376953, -426.57205200195, 49.441394805908, 350, 90, 175.98498535156 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1861.6220703125, -442.466796875, 46.11946105957, 340.99365234375, 90, 175.97900390625 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1862.240234375, -434.814453125, 47.992382049561, 349.99694824219, 90, 175.98449707031 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1861.068359375, -450.7509765625, 43.267742156982, 340.99362182617, 90, 175.97900390625 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1860.9909667969, -459.08117675781, 40.361721038818, 340.99362182617, 90, 183.97900390625 ); // vgsN_con_tube
	CreateDynamicObject( 10789, 1852.4384765625, -462.4873046875, 34.667999267578, 0, 0, 354.90002441406 ); // xenonroof_SFSe
	CreateDynamicObject( 3502, 1860.990234375, -459.0810546875, 44.061721801758, 340.99365234375, 90, 183.97705078125 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1861.068359375, -450.7509765625, 46.967742919922, 340.99365234375, 90, 175.97900390625 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1861.6220703125, -442.466796875, 50.650009155273, 330.99365234375, 90, 175.97900390625 ); // vgsN_con_tube
	CreateDynamicObject( 8572, 1863.2523193359, -466.00323486328, 39.518165588379, 0, 0, 86 ); // vgsSstairs02_lvs
	CreateDynamicObject( 1698, 1861.283203125, -463.4153137207, 40.793617248535, 10, 0, 90 ); // Esc_step8
	CreateDynamicObject( 1698, 1861.283203125, -464.76504516602, 40.793617248535, 10, 0, 90 ); // Esc_step8
	CreateDynamicObject( 8063, 1835.404296875, -465.4609375, 42.080261230469, 0, 0, 3.9990234375 ); // vgswrehse16
	CreateDynamicObject( 997, 1862.4896240234, -465.26266479492, 40.808460235596, 0, 355, 176 ); // lhouse_barrier3
	CreateDynamicObject( 3502, 1862.2265625, -434.9248046875, 55.206546783447, 325.986328125, 90, 175.97900390625 ); // vgsN_con_tube
	CreateDynamicObject( 11504, 1859.0433349609, -471.16903686523, 49.817970275879, 0, 180, 268 ); // des_garagew
	CreateDynamicObject( 982, 1860.2928466797, -472.03994750977, 37.676555633545, 0, 0, 4 ); // fenceshit
	CreateDynamicObject( 3929, 1864.9100341797, -406.39895629883, 48.389263153076, 0, 0, 0 ); // d_rock
	CreateDynamicObject( 3929, 1865.3610839844, -406.60406494141, 47.731735229492, 0, 0, 0 ); // d_rock
	CreateDynamicObject( 3929, 1865.6364746094, -406.47833251953, 48.70121383667, 0, 0, 0 ); // d_rock
	CreateDynamicObject( 761, 1864.2822265625, -406.412109375, 50.924713134766, 0, 0, 279.99499511719 ); // sm_drybrush_sm1
	CreateDynamicObject( 761, 1864.2822265625, -406.412109375, 50.124713897705, 0, 0, 267.99499511719 ); // sm_drybrush_sm1
	CreateDynamicObject( 661, 1875.8569335938, -392.37185668945, 35.344421386719, 0, 0, 27.9931640625 ); // pinetree07
	CreateDynamicObject( 7191, 1959.626953125, -508.0859375, 38.865329742432, 0, 0, 83.990478515625 ); // vegasNnewfence2b
	CreateDynamicObject( 1739, 1961.3598632813, -544.28405761719, 31.850643157959, 0, 0, 336 ); // SWANK_DIN_CHAIR_5
	CreateDynamicObject( 1805, 1878.2059326172, -544.63421630859, 30.906852722168, 0, 0, 0 ); // CJ_BARSTOOL
	CreateDynamicObject( 1805, 1882.2283935547, -544.89630126953, 30.906852722168, 0, 0, 0 ); // CJ_BARSTOOL
	CreateDynamicObject( 3383, 1956.1837158203, -547.87219238281, 30.657772064209, 0, 0, 356 ); // a51_labtable1_
	CreateDynamicObject( 1432, 1907.1706542969, -542.0810546875, 30.657772064209, 0, 0, 0 ); // DYN_TABLE_2
	CreateDynamicObject( 16377, 1906.9678955078, -544.76190185547, 31.645433425903, 0, 0, 356 ); // tv_stand_by
	CreateDynamicObject( 1670, 1907.0595703125, -541.59936523438, 31.273109436035, 0, 0, 0 ); // propcollecttable
	CreateDynamicObject( 2801, 1907.1650390625, -542.06286621094, 30.91473197937, 0, 0, 0 ); // castable1top
	CreateDynamicObject( 1670, 1907.4526367188, -542.48675537109, 31.273109436035, 0, 0, 42 ); // propcollecttable
	CreateDynamicObject( 761, 1865.6486816406, -407.08776855469, 50.639995574951, 0, 0, 0 ); // sm_drybrush_sm1
	CreateDynamicObject( 823, 1855.9997558594, -471.92739868164, 40.152046203613, 0, 0, 0 ); // genVEG_tallgrass07
	CreateDynamicObject( 17026, 1877.8388671875, -413.0419921875, 52.375782012939, 0, 0, 235.99182128906 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1850.0601806641, -442.13070678711, 48.27668762207, 0, 350, 143.99990844727 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1862.2546386719, -466.55590820313, 52.966541290283, 0, 0, 167.98742675781 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1936.3369140625, -530.5654296875, 51.607578277588, 0, 0, 153.99536132813 ); // cunt_rockgp2_
	CreateDynamicObject( 683, 1844, -435.47738647461, 65.333572387695, 0, 0, 0 ); // sm_fir_group
	CreateDynamicObject( 725, 1856.427734375, -432.4306640625, 40.078170776367, 0, 0, 312 ); // veg_largefurs06
	CreateDynamicObject( 17026, 1868.1182861328, -575.64739990234, 41.769065856934, 0, 0, 167.98645019531 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1977.9090576172, -557.6689453125, 40.53653717041, 0, 0, 243.98583984375 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1890.376953125, -561.6357421875, 52.690757751465, 0, 0, 237.98645019531 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1850.9851074219, -504.82409667969, 42.009231567383, 0, 0, 163.98742675781 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1853.9295654297, -540.77575683594, 45.208263397217, 0, 0, 163.98742675781 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1931.634765625, -560.5703125, 42.605911254883, 0, 0, 237.98645019531 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1946.9985351563, -580.50524902344, 38.940200805664, 0, 30, 255.98583984375 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1907.1279296875, -580.3291015625, 43.375686645508, 0, 19.9951171875, 237.98034667969 ); // cunt_rockgp2_
	CreateDynamicObject( 9241, 1946.2186279297, -447.46194458008, 55.066478729248, 0, 0, 0 ); // copbits_sfn
	CreateDynamicObject( 17026, 1911.451171875, -597.30267333984, 31.441780090332, 0, 29.998168945313, 221.9814453125 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1968.5810546875, -572.19921875, 26.511848449707, 0, 29.998168945313, 255.9814453125 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1971.9670410156, -581.35461425781, 30.536474227905, 0, 29.998168945313, 255.9814453125 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1930.8072509766, -577.27795410156, 44.77751159668, 0, 19.9951171875, 237.98034667969 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1943.08203125, -600.7060546875, 27.922719955444, 0, 29.998168945313, 265.9814453125 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1931.634765625, -560.5703125, 42.605911254883, 0, 0, 237.98583984375 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1892.7913818359, -531.23071289063, 53.607578277588, 0, 0, 343.98583984375 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1886.4820556641, -454.0534362793, 53.603668212891, 0, 0, 229.99328613281 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1863.9296875, -520.1962890625, 54.001358032227, 0, 0, 319.98229980469 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1884.6635742188, -496.91110229492, 53.603672027588, 0, 0, 13.978149414063 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1925.7674560547, -483.58862304688, 51.607578277588, 0, 0, 43.978149414063 ); // cunt_rockgp2_
	CreateDynamicObject( 955, 1865.1033935547, -456.24597167969, 37.781230926514, 0, 0, 262 ); // CJ_EXT_SPRUNK
	CreateDynamicObject( 955, 1955.1481933594, -451.04095458984, 40.632385253906, 0, 0, 261.99645996094 ); // CJ_EXT_SPRUNK
	CreateDynamicObject( 661, 1866.3837890625, -441.4873046875, 53.607578277588, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 661, 1865.6123046875, -396.9140625, 45.019599914551, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 664, 1920.9208984375, -492.0009765625, 53.407577514648, 0, 0, 76 ); // firtree2
	CreateDynamicObject( 800, 1952.2291259766, -435.38400268555, 36.445774078369, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 970, 1954.3310546875, -446.8955078125, 40.941120147705, 0, 0, 0 ); // fencesmallb
	CreateDynamicObject( 970, 1948.9910888672, -446.8955078125, 40.941120147705, 0, 0, 0 ); // fencesmallb
	CreateDynamicObject( 661, 1879.5180664063, -435.26354980469, 67.742095947266, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 866, 1862.7431640625, -430.57534790039, 56.30277633667, 0, 0, 0 ); // sand_combush03
	CreateDynamicObject( 866, 1862.7431640625, -430.5751953125, 56.702777862549, 0, 0, 330 ); // sand_combush03
	CreateDynamicObject( 2404, 1955.4008789063, -454.71313476563, 42.555294036865, 0, 0, 270 ); // CJ_SURF_BOARD
	CreateDynamicObject( 2404, 1947.4777832031, -453.02227783203, 41.654838562012, 0, 0, 86 ); // CJ_SURF_BOARD
	CreateDynamicObject( 1641, 1954.3493652344, -455.87637329102, 40.389640808105, 0, 0, 0 ); // beachtowel03
	CreateDynamicObject( 1649, 1945.1043701172, -519.11285400391, 35.009994506836, 270, 0, 84 ); // wglasssmash
	CreateDynamicObject( 2665, 1943.5319824219, -518.1298828125, 34.563636779785, 0, 0, 83.990478515625 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1943.53125, -518.1298828125, 33.763637542725, 0, 0, 83.990478515625 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1943.53125, -518.1298828125, 32.963638305664, 0, 0, 83.990478515625 ); // CJ_FF_LIST04
	CreateDynamicObject( 1651, 1942.3489990234, -519.12030029297, 33.546035766602, 90, 0, 86 ); // od_copwindows
	CreateDynamicObject( 2665, 1943.8114013672, -516.51220703125, 33.7428855896, 0, 90, 63.990447998047 ); // CJ_FF_LIST04
	CreateDynamicObject( 2665, 1946.7768554688, -516.28259277344, 33.359767913818, 0, 90, 359.98986816406 ); // CJ_FF_LIST04
	CreateDynamicObject( 3502, 1942.6154785156, -502.99530029297, 55.006893157959, 0, 0, 11.984985351563 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1944.4034423828, -511.94683837891, 55.006893157959, 0, 0, 11.980590820313 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1947.8193359375, -519.228515625, 55.006893157959, 0, 0, 41.978759765625 ); // vgsN_con_tube
	CreateDynamicObject( 17026, 1950.0791015625, -532.2734375, 56.990756988525, 0, 0, 171.99096679688 ); // cunt_rockgp2_
	CreateDynamicObject( 758, 1939.4333496094, -500.13662719727, 53.607578277588, 0, 0, 0 ); // sm_scrub_rock6
	CreateDynamicObject( 750, 1938.7580566406, -499.61892700195, 54.997421264648, 0, 0, 0 ); // sm_scrb_column2
	CreateDynamicObject( 751, 1937.869140625, -497.3935546875, 53.607578277588, 0, 0, 0 ); // sm_scrb_column1
	CreateDynamicObject( 3929, 1940.3052978516, -499.50802612305, 56.992343902588, 0, 0, 1.99951171875 ); // d_rock
	CreateDynamicObject( 761, 1941.1906738281, -499.49942016602, 56.606597900391, 0, 0, 0 ); // sm_drybrush_sm1
	CreateDynamicObject( 818, 1942.4123535156, -506.0764465332, 60.298625946045, 0, 0, 0 ); // genVEG_tallgrass02
	CreateDynamicObject( 3929, 1941.6145019531, -500.54888916016, 57.425109863281, 0, 0, 1.99951171875 ); // d_rock
	CreateDynamicObject( 3502, 1953.8206787109, -526.10260009766, 55.006893157959, 0, 0, 41.978759765625 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1969.2062988281, -542.75415039063, 63.583240509033, 310, 0, 49.978759765625 ); // vgsN_con_tube
	CreateDynamicObject( 751, 1924.5993652344, -445.21911621094, 53.607578277588, 0, 0, 0 ); // sm_scrb_column1
	CreateDynamicObject( 17026, 1957.5965576172, -544.55975341797, 50.439544677734, 0, 0, 191.99096679688 ); // cunt_rockgp2_
	CreateDynamicObject( 664, 1974.6271972656, -539.21856689453, 70.07551574707, 0, 0, 0 ); // firtree2
	CreateDynamicObject( 664, 1876.5338134766, -474.0295715332, 53.603668212891, 0, 0, 0 ); // firtree2
	CreateDynamicObject( 664, 1916.3460693359, -575.95043945313, 52.46053314209, 0, 0, 0 ); // firtree2
	CreateDynamicObject( 3502, 1959.806640625, -532.8818359375, 55.006893157959, 0, 0, 41.978759765625 ); // vgsN_con_tube
	CreateDynamicObject( 3502, 1964.8701171875, -538.7333984375, 57.53621673584, 319.99877929688, 0, 41.973266601563 ); // vgsN_con_tube
	CreateDynamicObject( 17026, 1979.7158203125, -561.0234375, 50.50630569458, 0, 39.995727539063, 235.98864746094 ); // cunt_rockgp2_
	CreateDynamicObject( 17026, 1963.5695800781, -533.13006591797, 62.633575439453, 0, 0, 121.98672485352 ); // cunt_rockgp2_
	CreateDynamicObject( 800, 2058.5654296875, -635.38439941406, 72.731002807617, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 2016.8994140625, -568.2705078125, 72.242790222168, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 2007.90625, -552.3720703125, 73.484146118164, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 2031.83203125, -527.708984375, 81.691680908203, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 1967.5200195313, -547.716796875, 68.355087280273, 0, 340, 46 ); // genVEG_bush07
	CreateDynamicObject( 800, 1976.787109375, -546.869140625, 69.190124511719, 0, 339.99938964844, 45.999755859375 ); // genVEG_bush07
	CreateDynamicObject( 800, 1972.1396484375, -549.5302734375, 67.386901855469, 0, 339.99938964844, 45.999755859375 ); // genVEG_bush07
	CreateDynamicObject( 800, 1989.0635986328, -508.36428833008, 74.216041564941, 0, 339.99938964844, 45.999755859375 ); // genVEG_bush07
	CreateDynamicObject( 800, 1969.0701904297, -541.44512939453, 70.108489990234, 0, 339.99938964844, 45.999755859375 ); // genVEG_bush07
	CreateDynamicObject( 664, 1946, -497.037109375, 64.38996887207, 0, 0, 34 ); // firtree2
	CreateDynamicObject( 661, 1859.4720458984, -381.69799804688, 50.879272460938, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 661, 1875.8928222656, -380.33221435547, 35.468944549561, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 661, 1872.9091796875, -345.5869140625, 37.105895996094, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 758, 1972.7019042969, -546.8779296875, 63.026916503906, 0, 0, 0 ); // sm_scrub_rock6
	CreateDynamicObject( 900, 2271.0646972656, -264.7038269043, 3.4026794433594, 10, 8, 330 ); // searock04
	CreateDynamicObject( 12990, 1973.9584960938, -251.6785736084, 1.3709526062012, 0, 0, 178 ); // sw_jetty
	CreateDynamicObject( 661, 1859.4141845703, -446.19439697266, 68.384162902832, 0, 30, 29.995361328125 ); // pinetree07
	CreateDynamicObject( 800, 1867.02734375, -428.06814575195, 61.365756988525, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 1898.3718261719, -479.12292480469, 57.251453399658, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 661, 1864.53515625, -428.7705078125, 57.218620300293, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 661, 1875.4215087891, -427.55459594727, 56.419006347656, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 17026, 1842.3072509766, -396.69906616211, 48.152961730957, 0, 0, 219.986328125 ); // cunt_rockgp2_
	CreateDynamicObject( 896, 2265.4204101563, -257.18145751953, -1.3039134740829, 0, 0, 42 ); // searock06
	CreateDynamicObject( 744, 1956.568359375, -531.244140625, 30.657772064209, 0, 0, 0 ); // sm_scrub_rock4
	CreateDynamicObject( 744, 1953.34375, -529.64453125, 30.657772064209, 0, 0, 95.99853515625 ); // sm_scrub_rock4
	CreateDynamicObject( 744, 1949.07421875, -530.861328125, 30.657772064209, 0, 0, 43.994750976563 ); // sm_scrub_rock4
	CreateDynamicObject( 744, 1947.07421875, -530.861328125, 30.657772064209, 0, 0, 351.99475097656 ); // sm_scrub_rock4
	CreateDynamicObject( 751, 1915.4332275391, -461.40921020508, 53.607574462891, 0, 0, 0 ); // sm_scrb_column1
	CreateDynamicObject( 751, 1897.3427734375, -478.2939453125, 53.607578277588, 0, 0, 0 ); // sm_scrb_column1
	CreateDynamicObject( 661, 1859.3135986328, -427.04769897461, 59.603988647461, 0, 0, 63.995361328125 ); // pinetree07
	CreateDynamicObject( 661, 1859.912109375, -438.5048828125, 61.012031555176, 0, 29.998168945313, 29.99267578125 ); // pinetree07
	CreateDynamicObject( 800, 1867.9296875, -442.724609375, 57.251453399658, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 1917.2431640625, -460.8447265625, 57.251453399658, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 1923.3310546875, -448.552734375, 57.251453399658, 0, 0, 0 ); // genVEG_bush07
	CreateDynamicObject( 800, 1909.0693359375, -443.12109375, 57.251453399658, 0, 0, 0 ); // genVEG_bush07
}