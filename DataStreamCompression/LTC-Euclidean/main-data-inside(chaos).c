#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "circles_intersect.h"

#define EPSILON 100
#define TIMEUNIT_DIFFERENT 1
#define IS_CSV_INCLUDE_TITLE 1
#define MAX_lINE_BYPE_SIZE 50

struct DATA_POINT data_list[613] =  {{1,-4029,253,-16087},{2,-4442,64,-15994},{3,-4632,-351,-15795},{4,-4430,-323,-15822},
                                     {5,-4341,-643,-15775},{6,-4605,-798,-15434},{7,-4704,-942,-15342},{8,-4326,-1126,-15576},{9,-3911,-1224,-15618},
                                     {10,-4324,-1236,-15357},{11,-5422,-1410,-14953},{12,-5347,-1751,-14993},{13,-4089,-1698,-16092},{14,-1978,-1387,-16611},{15,-1342,-1317,-16067},{16,-1467,-1296,-15842},{17,-1322,-1446,-16211},{18,-1348,-1404,-15704},{19,-2227,-1030,-15643},{20,-2723,-1298,-16270},{21,-2100,-1332,-16075},{22,-1729,-1196,-15810},{23,-1861,-1356,-16287},{24,-1765,-1335,-16277},{25,-1772,-1072,-16325},{26,-1936,-1114,-16472},{27,-1876,-1393,-16802},{28,-1924,-1393,-17237},{29,-1796,-1514,-18084},{30,-1375,-1556,-18265},{31,-1728,-1266,-17862},{32,-3226,-1356,-17030},{33,-3494,-1756,-16789},{34,-2625,-1566,-17245},{35,-2271,-1104,-18108},{36,-2907,-828,-18691},{37,-4409,-648,-18605},{38,-4119,-95,-17658},{39,-3326,716,-16441},{40,-2483,1089,-15697},{41,-1957,1846,-15078},{42,-1658,1951,-14610},{43,-1563,1752,-14531},{44,-1610,1092,-14085},{45,-2633,3633,-14690},{46,-849,1244,-15373},{47,-1408,1301,-14825},{48,-305,1168,-14763},{49,-603,874,-15110},{50,-1203,420,-16013},{51,-399,449,-16950},{52,5,123,-17040},{53,358,-94,-16498},{54,422,-300,-16222},{55,1219,106,-16374},{56,1066,-212,-16281},{57,1224,-561,-16255},{58,1143,-870,-15784},{59,1204,-1042,-15105},{60,115,-1620,-14893},{61,213,-1484,-15162},{62,743,-1400,-15586},{63,287,-1957,-15368},{64,-202,-2351,-15129},{65,-687,-2744,-14416},{66,830,-2542,-15536},{67,387,-2153,-16189},{68,830,-2380,-16167},{69,1313,-2527,-15879},{70,1664,-2459,-15358},{71,1669,-2065,-15290},{72,462,-1887,-16754},{73,-161,-2577,-17103},{74,1102,-3502,-15838},{75,1558,-3554,-16186},{76,379,-2805,-16863},{77,-2067,-2694,-15813},{78,-1999,-2557,-14488},{79,-10,-2002,-13995},{80,-461,-1048,-15532},{81,-614,-1322,-16075},{82,2023,-2283,-15536},{83,3490,-2572,-15589},{84,3222,-2015,-16054},{85,1698,-1622,-16482},{86,1000,-1599,-16595},{87,1536,-1550,-16570},{88,1719,-1620,-16739},{89,1119,-1531,-17022},{90,313,-1396,-17064},{91,-154,-1457,-16828},{92,355,-1440,-16509},{93,599,-1266,-16439},{94,323,-1024,-16536},{95,92,-993,-16175},{96,-263,-1068,-15934},{97,-536,-980,-15941},{98,-702,-1173,-16194},{99,-1500,-1479,-16399},{100,-1834,-1937,-15656},{101,-1490,-2324,-15480},{102,-1515,-2929,-16080},{103,-1008,-3480,-16638},{104,-528,-4190,-16371},{105,782,-3363,-16366},{106,1570,-2564,-16528},{107,643,-2932,-17414},{108,438,-3745,-16863},{109,846,-3353,-15297},{110,975,-1974,-15404},{111,1451,-1408,-16063},{112,1547,-2518,-16317},{113,2520,-3382,-15882},{114,3093,-2949,-14491},{115,2909,-1445,-14876},{116,1584,-1146,-15997},{117,1648,-1772,-16412},{118,3013,-2253,-16102},{119,3869,-2203,-15325},{120,3440,-1188,-14658},{121,2680,82,-14882},{122,1646,117,-15199},{123,1349,-690,-15187},{124,2296,-1582,-14950},{125,3320,-1467,-13812},{126,3550,-300,-14097},{127,1856,120,-15300},{128,290,-585,-15787},{129,321,-1273,-16143},{130,1827,-1252,-16074},{131,3435,8,-15847},{132,3184,586,-16318},{133,983,216,-16979},{134,15,262,-17866},{135,1088,889,-17775},{136,2831,1681,-17299},{137,3258,1948,-17357},{138,1104,1456,-17318},{139,-1090,1280,-17261},{140,-2683,1704,-17786},{141,-1394,2301,-17944},{142,-17,2148,-17135},{143,-523,1656,-16573},{144,-1365,1501,-16684},{145,-2139,1185,-16791},{146,-1630,981,-16725},{147,-400,865,-16386},{148,-145,512,-16018},{149,-416,284,-16040},{150,-704,22,-16035},{151,-637,-254,-16075},{152,-12,-439,-15680},{153,-127,-336,-15646},{154,-686,-459,-15865},{155,-496,-635,-15990},{156,-484,-391,-16254},{157,-394,-60,-16255},{158,-501,112,-16173},{159,-780,400,-16457},{160,-1025,791,-17075},{161,-993,1009,-17356},{162,-875,1289,-17238},{163,-1048,1903,-17262},{164,-1136,2160,-17671},{165,-870,2178,-17904},{166,-574,2053,-17602},{167,-449,1905,-17170},{168,-126,1892,-16994},{169,233,1709,-16961},{170,659,1399,-16598},{171,1056,1064,-16075},{172,1201,896,-15679},{173,1221,742,-15595},{174,823,380,-15797},{175,833,-161,-15811},{176,915,-639,-15427},{177,637,-1190,-15128},{178,785,-1062,-15235},{179,241,-751,-15920},{180,-1260,-807,-16928},{181,-1485,-1479,-16801},{182,-781,-1842,-16647},{183,212,-1510,-17215},{184,1098,-1295,-17429},{185,1662,-837,-17253},{186,1115,-1113,-16280},{187,885,-1749,-15483},{188,525,-1614,-16322},{189,545,-1716,-16205},{190,228,-1696,-15897},{191,642,-1533,-15520},{192,-161,-1698,-15643},{193,-243,-2235,-15768},{194,1037,-2169,-16135},{195,1913,-2192,-15805},{196,1705,-2455,-15831},{197,2445,-2062,-15810},{198,3133,-1895,-15288},{199,2287,-2001,-15159},{200,463,-2440,-15299},{201,519,-2395,-14778},{202,423,-2962,-14445},{203,981,-3275,-14770},{204,-352,-3230,-15263},{205,-787,-3017,-15582},{206,-25,-2718,-15972},{207,967,-3016,-15862},{208,2073,-2909,-16183},{209,2161,-2467,-16858},{210,1604,-2220,-17154},{211,1671,-2191,-16985},{212,2165,-2215,-16624},{213,1826,-2097,-16388},{214,1146,-2034,-16261},{215,1405,-1824,-16189},{216,1696,-1705,-16128},{217,1868,-1619,-16050},{218,1469,-1603,-16080},{219,1035,-1606,-16001},{220,823,-1566,-15895},{221,424,-1422,-16033},{222,-16,-1573,-16219},{223,-424,-1725,-16291},{224,-878,-2229,-16210},{225,-296,-2687,-16242},{226,300,-2490,-15988},{227,-191,-1646,-16179},{228,-763,-1092,-16983},{229,-496,-1848,-17070},{230,1175,-3380,-15761},{231,2609,-4373,-14556},{232,3564,-3267,-14071},{233,2824,-2020,-14798},{234,825,-2315,-15194},{235,-10,-3493,-14913},{236,1222,-4207,-14878},{237,2777,-3172,-15106},{238,3335,-1737,-16005},{239,2337,-1975,-16412},{240,1487,-2468,-16757},{241,1787,-3050,-16728},{242,2906,-2862,-16031},{243,3511,-1546,-16038},{244,3267,-801,-16711},{245,3394,-1168,-16798},{246,3819,-1437,-16425},{247,3580,-1119,-15692},{248,2870,-96,-15378},{249,1338,306,-15879},{250,583,80,-16229},{251,1654,-86,-15801},{252,2886,655,-15102},{253,2759,1403,-15099},{254,1565,1313,-16064},{255,1413,812,-16368},{256,3175,821,-15447},{257,3173,1354,-15551},{258,2315,819,-16218},{259,1729,174,-16381},{260,2029,47,-16189},{261,2803,369,-16427},{262,3032,522,-16913},{263,2324,496,-17295},{264,1504,443,-17355},{265,1394,453,-17265},{266,1659,663,-17266},{267,1598,862,-17132},{268,1149,738,-17055},{269,842,752,-16594},{270,172,702,-16249},{271,247,731,-16436},{272,438,536,-16338},{273,710,455,-16381},{274,884,390,-16615},{275,853,174,-16582},{276,959,-81,-16626},{277,1091,-232,-16560},{278,1091,-170,-16485},{279,1065,18,-16559},{280,1208,5,-16608},{281,1260,1,-16558},{282,1245,223,-16585},{283,1133,496,-16764},{284,1088,832,-16849},{285,1047,1232,-16938},{286,962,1623,-16982},{287,823,1793,-16872},{288,879,1720,-16864},{289,1433,1727,-16843},{290,2046,1883,-16504},{291,1985,2045,-16283},{292,1551,1922,-16300},{293,1352,1761,-16239},{294,1758,1686,-16090},{295,2200,1545,-15946},{296,2172,1520,-16057},{297,1959,1468,-16291},{298,1885,1361,-16548},{299,2104,896,-16343},{300,2027,234,-16585},{301,1966,-26,-16989},{302,1984,270,-17252},{303,1171,105,-16966},{304,-200,-697,-16893},{305,246,-847,-17119},{306,1793,-906,-16701},{307,2158,-972,-16367},{308,1150,-656,-16357},{309,283,-963,-15841},{310,-34,-1189,-15185},{311,723,-1308,-15358},{312,1913,-1417,-15367},{313,2458,-1602,-15099},{314,2102,-1977,-14880},{315,2136,-2247,-14576},{316,1995,-2337,-14327},{317,1238,-2376,-14395},{318,743,-2504,-14390},{319,1705,-2630,-14021},{320,2342,-2555,-14357},{321,1878,-2348,-15858},{322,1656,-2403,-16279},{323,1364,-2705,-15970},{324,1263,-3120,-16409},{325,1932,-3183,-16838},{326,3159,-2814,-16780},{327,3351,-2522,-16614},{328,2592,-2236,-16687},{329,2333,-1972,-16718},{330,2677,-1677,-16586},{331,2613,-1835,-16273},{332,2184,-1967,-16418},{333,1715,-1905,-16372},{334,1299,-1742,-16289},{335,1291,-1584,-16068},{336,1741,-1465,-15737},{337,2239,-1189,-15940},{338,2430,-1156,-16061},{339,2206,-1160,-16232},{340,2263,-1243,-16386},{341,2195,-1440,-16250},{342,1924,-1283,-16155},{343,1666,-1163,-16082},{344,1500,-1115,-15928},{345,1019,-1358,-15953},{346,945,-1735,-16175},{347,1213,-2375,-16368},{348,1535,-2865,-16180},{349,1042,-3220,-16175},{350,84,-3052,-16260},{351,-1080,-3126,-16279},{352,-1190,-3319,-16210},{353,-107,-3689,-15251},{354,-1,-3638,-14992},{355,393,-3279,-15993},{356,2152,-3169,-16049},{357,2513,-3203,-15697},{358,2185,-3023,-15860},{359,1688,-2732,-16599},{360,2011,-2361,-16816},{361,2806,-1622,-16666},{362,3613,-1033,-16466},{363,3452,-725,-16175},{364,3145,-371,-16038},{365,2176,-101,-15948},{366,541,60,-15875},{367,-718,273,-15774},{368,290,1159,-15444},{369,1668,1985,-15254},{370,663,1858,-15279},{371,-756,1578,-15520},{372,-185,1747,-15741},{373,1091,1983,-15710},{374,1303,1929,-15610},{375,470,1871,-15559},{376,75,1724,-15782},{377,630,1718,-16332},{378,1695,2031,-16695},{379,2356,2191,-16804},{380,1357,1914,-16902},{381,639,1440,-17622},{382,1290,1136,-17320},{383,1756,1357,-16868},{384,999,1680,-16739},{385,70,1580,-16744},{386,325,1695,-16837},{387,931,1786,-16727},{388,1507,1718,-16389},{389,1368,1654,-16137},{390,896,1490,-16161},{391,848,1498,-16437},{392,1572,1432,-16385},{393,1850,1337,-16264},{394,1786,1308,-16411},{395,1407,1167,-16473},{396,1444,1037,-16572},{397,1486,951,-16692},{398,1247,1162,-16722},{399,1295,1909,-16753},{400,1175,2426,-16690},{401,581,2670,-16779},{402,728,2834,-16847},{403,1155,2951,-16774},{404,1235,3313,-16792},{405,1509,3593,-16911},{406,1744,3276,-16740},{407,2014,2887,-16421},{408,2040,2690,-16222},{409,1914,2720,-16488},{410,1463,2283,-16606},{411,967,1729,-16707},{412,721,1291,-16479},{413,594,635,-15989},{414,1131,439,-16087},{415,1563,353,-16128},{416,1381,12,-15906},{417,1305,-533,-15599},{418,883,-670,-15567},{419,929,-420,-15995},{420,1388,-682,-16283},{421,1917,-1394,-16318},{422,1226,-2182,-16086},{423,1709,-2354,-16330},{424,1523,-2429,-16603},{425,785,-2847,-16117},{426,-91,-3291,-15643},{427,10,-3023,-15765},{428,432,-2477,-15665},{429,254,-2050,-15409},{430,-263,-1748,-15256},{431,-304,-2185,-14763},{432,302,-2217,-14797},{433,1404,-2217,-15196},{434,2972,-2155,-15489},{435,4178,-1707,-15662},{436,2875,-1936,-15611},{437,1994,-2430,-15846},{438,2828,-2575,-15726},{439,3341,-2610,-15893},{440,2429,-2601,-16369},{441,1802,-2815,-16690},{442,2528,-2916,-16157},{443,3261,-2637,-16294},{444,3330,-2727,-16674},{445,3798,-2696,-16528},{446,3732,-2612,-16224},{447,3397,-2478,-16018},{448,3043,-2073,-16085},{449,2305,-1823,-15813},{450,2558,-1578,-15593},{451,2604,-1691,-15626},{452,2095,-1867,-15980},{453,1597,-2022,-16249},{454,1381,-2162,-16270},{455,1097,-2300,-16416},{456,1201,-2653,-16463},{457,455,-1860,-16422},{458,-381,-2187,-16700},{459,637,-2519,-16583},{460,1925,-2727,-15991},{461,3751,-2617,-15460},{462,3807,-2512,-15536},{463,2735,-2503,-15777},{464,2945,-2371,-15484},{465,3475,-2382,-15324},{466,4256,-2519,-15294},{467,3703,-2785,-14873},{468,2880,-2619,-15078},{469,2181,-2389,-15576},{470,2217,-2232,-15709},{471,2854,-1853,-15690},{472,3570,-1412,-15395},{473,3000,-1080,-15207},{474,1655,-760,-15552},{475,1371,-561,-15444},{476,1529,36,-14853},{477,1239,1202,-14584},{478,744,1950,-14453},{479,104,2007,-14500},{480,-73,1951,-15352},{481,270,2303,-15703},{482,713,2315,-15572},{483,563,2135,-15535},{484,304,2200,-16106},{485,-64,2205,-16322},{486,-24,2183,-16411},{487,-326,2338,-16898},{488,-318,2329,-17560},{489,59,1892,-17577},{490,-82,1685,-17409},{491,-627,1848,-17213},{492,-1485,2068,-17063},{493,-1493,1989,-17167},{494,-834,1801,-16906},{495,-875,2310,-16338},{496,-1715,1881,-16519},{497,-1815,1799,-16561},{498,-2211,1825,-16649},{499,-2076,1630,-16799},{500,-1806,1522,-17302},{501,-1650,1319,-17645},{502,-1310,1239,-17365},{503,-1409,1101,-16887},{504,-1576,1012,-16901},{505,-1733,1084,-16932},{506,-1176,1096,-16390},{507,-580,1063,-15683},{508,-568,1081,-15497},{509,-512,1004,-15457},{510,-510,765,-15265},{511,-695,748,-15281},{512,-657,677,-15343},{513,-485,432,-15499},{514,-662,343,-15634},{515,-1055,428,-15960},{516,-1660,333,-16014},{517,-1808,195,-15923},{518,-1846,260,-15732},{519,-1990,448,-15381},{520,-1779,690,-15282},{521,-1545,819,-15564},{522,-150,638,-16869},{523,2037,-187,-19563},{524,-2917,1024,-19067},{525,-3003,1288,-16802},{526,-2981,1348,-16160},{527,-2952,1342,-16609},{528,-2614,1084,-16889},{529,-2667,1047,-16647},{530,-2544,1212,-16354},{531,-2458,1271,-16051},{532,-2586,1057,-16056},{533,-2599,971,-15973},{534,-2758,805,-16069},{535,-2574,866,-16036},{536,-2304,847,-15993},{537,-2570,845,-15874},{538,-2784,931,-15912},{539,-3007,967,-15961},{540,-2668,1049,-16067},{541,-2496,1052,-16064},{542,-2743,1124,-16003},{543,-2636,1326,-16081},{544,-2718,1453,-16110},{545,-2648,1480,-16100},{546,-2701,1476,-16070},{547,-2726,1366,-16056},{548,-2896,1284,-15986},{549,-2820,1176,-16001},{550,-2495,1154,-16047},{551,-2736,1136,-15979},{552,-2984,1158,-15927},{553,-2950,1126,-15936},{554,-2797,1046,-15943},{555,-2805,1025,-15924},{556,-2817,1032,-15923},{557,-3044,1002,-15925},{558,-2922,1056,-15934},{559,-2776,1044,-15950},{560,-2758,1037,-15929},{561,-2741,1037,-15936},{562,-3064,1041,-15881},{563,-3262,1026,-15925},{564,-2946,1062,-15978},{565,-3021,1022,-15897},{566,-3003,1049,-15931},{567,-2962,1016,-15964},{568,-3004,1046,-15937},{569,-2971,1039,-15930},{570,-3067,1031,-15945},{571,-3093,1016,-15936},{572,-3123,1003,-15884},{573,-3126,962,-15883},{574,-3083,912,-15884},{575,-3006,930,-15947},{576,-3008,1001,-15919},{577,-3159,1001,-15866},{578,-3202,1014,-15893},{579,-3167,991,-15947},{580,-3058,999,-15937},{581,-2973,1009,-15887},{582,-3069,966,-15892},{583,-3188,1023,-15877},{584,-3076,1049,-15925},{585,-3008,1004,-15915},{586,-3180,970,-15861},{587,-3183,958,-15830},{588,-3173,947,-15851},{589,-3237,963,-15858},{590,-3120,1055,-15918},{591,-3198,1117,-15933},{592,-3127,1133,-15949},{593,-3061,1125,-15924},{594,-3125,1108,-15912},{595,-3222,1105,-15895},{596,-3278,1094,-15873},{597,-3222,1064,-15869},{598,-3157,1053,-15892},{599,-3235,1028,-15897},{600,-3272,990,-15854},{601,-3182,1025,-15894},{602,-3174,1036,-15869},{603,-3259,1028,-15893},{604,-3236,1010,-15872},{605,-3188,999,-15877},{606,-3175,989,-15913},{607,-3234,1070,-15877},{608,-3414,1087,-15836},{609,-3399,999,-15840},{610,-3308,960,-15817},{611,-3232,964,-15863},{612,-3216,996,-15873},{613,-3359,1040,-15844}};


struct DATA_POINT base_data;
struct DATA_POINT coming_data;
struct CIRCLE corresponse_circle;
struct LIST_CIRCLE all_circles = {NULL, 0};


void updateBasePoint()
{
    base_data.data.x = base_data.data.x + (centre_point.x - base_data.data.x)*(coming_data.timestamp-1 -base_data.timestamp);
    base_data.data.y = base_data.data.y + (centre_point.y - base_data.data.y)*(coming_data.timestamp-1 -base_data.timestamp);
    base_data.data.z = base_data.data.z + (centre_point.z - base_data.data.z)*(coming_data.timestamp-1 -base_data.timestamp);
    base_data.timestamp = coming_data.timestamp-1;
}

void updateCorCircle()
{
    double ln = coming_data.timestamp-base_data.timestamp;
    corresponse_circle.centre.x = base_data.data.x + (coming_data.data.x - base_data.data.x)/ln;
    corresponse_circle.centre.y = base_data.data.y + (coming_data.data.y - base_data.data.y)/ln;
    corresponse_circle.centre.z = base_data.data.z + (coming_data.data.z - base_data.data.z)/ln;
    corresponse_circle.radius = EPSILON/ln;
}

//void transmitData()
//{
//    printf("%u,%f,%f,%f\n",base_data.timestamp, base_data.data.x, base_data.data.y, base_data.data.z);
//}
//

int main()
{
//    setbuf(stdout, 0);
//    char *fpath = "data.csv";
//    FILE * f_csv = fopen(fpath, "r");
//    FILE * f_out = fopen("output.csv", "w");
//
//    if(f_csv == NULL)
//    {
//        printf("Open file %s failed", fpath);
//        exit(0);
//    }
//
//    char strLine[MAX_lINE_BYPE_SIZE];
//    char *tmp_segment;
//    if(IS_CSV_INCLUDE_TITLE)
//        fgets(strLine, MAX_lINE_BYPE_SIZE, f_csv);
//
//    int time_counter = 0;
//    //int number = 0;
//    while(fgets(strLine, MAX_lINE_BYPE_SIZE, f_csv))
//    {
//        /* read coming data */
//        time_counter += 1;
//        tmp_segment = strtok(strLine, ",");
//        if(tmp_segment != NULL)
//            coming_data.timestamp = (uint32_t)time_counter;
//        //coming_data.timestamp = (uint32_t)atoi(tmp_segment);
//
//        tmp_segment=strtok(NULL, ",");
//        if(tmp_segment != NULL)
//            coming_data.data.x = strtod(tmp_segment, NULL);
//
//        tmp_segment=strtok(NULL, ",");
//        if(tmp_segment != NULL)
//            coming_data.data.y = strtod(tmp_segment, NULL);
//
//        tmp_segment=strtok(NULL, ",");
//        if(tmp_segment != NULL)
//            coming_data.data.z = strtod(tmp_segment, NULL);

    for(int i=0; i< 613; i++)
    {
        coming_data = data_list[i];
        /* do initial when first and second data coming */
        //if(time_counter == 1)
        if(i==0)
        {
            /*
            base_data.timestamp = coming_data.timestamp;
            base_data.ax = coming_data.ax;
            base_data.ay = coming_data.ay;
            */
            base_data = coming_data;
            continue;
        }

        updateCorCircle();

        if(!isThereIntersection(all_circles, corresponse_circle))
        {
            // print out data
            //transmitData();
            //fprintf(f_out, "%u,%f,%f\n",base_data.timestamp, base_data.data.x, base_data.data.y);

            // update basePoint
            updateBasePoint();

            // reset all_circle list
            free(all_circles.circles);
            all_circles.circles = NULL;
            all_circles.length = 0;

            updateCorCircle();
            addCircleIntoList(&all_circles, corresponse_circle);
            centre_point = corresponse_circle.centre;
            //number +=1;
        }
        else
            addCircleIntoList(&all_circles, corresponse_circle);
    }

    //transmitData();
//    printf("%u,%f,%f,%f\n",base_data.timestamp, base_data.data.x, base_data.data.y, base_data.data.z);
//
//    double ln = coming_data.timestamp - base_data.timestamp;
//    double f_x = base_data.data.x + (centre_point.x-base_data.data.x)*ln;
//    double f_y = base_data.data.y + (centre_point.y-base_data.data.y)*ln;
//    double f_z = base_data.data.z + (centre_point.z-base_data.data.z)*ln;
//    printf("%u,%f,%f,%f\n",coming_data.timestamp, f_x, f_y, f_z);
//
//    printf("%d\n", number+=2);
//    fclose(f_csv);
//    fclose(f_out);
}