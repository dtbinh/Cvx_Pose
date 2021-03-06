/* Produced by CVXGEN, 2013-10-23 17:05:38 -0400.  */
/* CVXGEN is Copyright (C) 2006-2012 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2012 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: testsolver.c. */
/* Description: Basic test harness for solver.c. */
#include "solver.h"
Vars vars;
Params params;
Workspace work;
Settings settings;
#define NUMTESTS 0
int main(int argc, char **argv) {
  int num_iters;
#if (NUMTESTS > 0)
  int i;
  double time;
  double time_per;
#endif
  set_defaults();
  setup_indexing();
  load_default_data();
  /* Solve problem instance for the record. */
  settings.verbose = 1;
  num_iters = solve();
#ifndef ZERO_LIBRARY_MODE
#if (NUMTESTS > 0)
  /* Now solve multiple problem instances for timing purposes. */
  settings.verbose = 0;
  tic();
  for (i = 0; i < NUMTESTS; i++) {
    solve();
  }
  time = tocq();
  printf("Timed %d solves over %.3f seconds.\n", NUMTESTS, time);
  time_per = time / NUMTESTS;
  if (time_per > 1) {
    printf("Actual time taken per solve: %.3g s.\n", time_per);
  } else if (time_per > 1e-3) {
    printf("Actual time taken per solve: %.3g ms.\n", 1e3*time_per);
  } else {
    printf("Actual time taken per solve: %.3g us.\n", 1e6*time_per);
  }
#endif
#endif
  return 0;
}
void load_default_data(void) {
  params.data_1[0] = 0.20319161029830202;
  params.data_1[1] = 0.8325912904724193;
  params.model_1[0] = -0.8363810443482227;
  params.model_1[1] = 0.04331042079065206;
  params.data_2[0] = 1.5717878173906188;
  params.data_2[1] = 1.5851723557337523;
  params.model_2[0] = -1.497658758144655;
  params.model_2[1] = -1.171028487447253;
  params.data_3[0] = -1.7941311867966805;
  params.data_3[1] = -0.23676062539745413;
  params.model_3[0] = -1.8804951564857322;
  params.model_3[1] = -0.17266710242115568;
  params.data_4[0] = 0.596576190459043;
  params.data_4[1] = -0.8860508694080989;
  params.model_4[0] = 0.7050196079205251;
  params.model_4[1] = 0.3634512696654033;
  params.data_5[0] = -1.9040724704913385;
  params.data_5[1] = 0.23541635196352795;
  params.model_5[0] = -0.9629902123701384;
  params.model_5[1] = -0.3395952119597214;
  params.data_6[0] = -0.865899672914725;
  params.data_6[1] = 0.7725516732519853;
  params.model_6[0] = -0.23818512931704205;
  params.model_6[1] = -1.372529046100147;
  params.data_7[0] = 0.17859607212737894;
  params.data_7[1] = 1.1212590580454682;
  params.model_7[0] = -0.774545870495281;
  params.model_7[1] = -1.1121684642712744;
  params.data_8[0] = -0.44811496977740495;
  params.data_8[1] = 1.7455345994417217;
  params.model_8[0] = 1.9039816898917352;
  params.model_8[1] = 0.6895347036512547;
  params.data_9[0] = 1.6113364341535923;
  params.data_9[1] = 1.383003485172717;
  params.model_9[0] = -0.48802383468444344;
  params.model_9[1] = -1.631131964513103;
  params.data_10[0] = 0.6136436100941447;
  params.data_10[1] = 0.2313630495538037;
  params.model_10[0] = -0.5537409477496875;
  params.model_10[1] = -1.0997819806406723;
  params.data_11[0] = -0.3739203344950055;
  params.data_11[1] = -0.12423900520332376;
  params.model_11[0] = -0.923057686995755;
  params.model_11[1] = -0.8328289030982696;
  params.data_12[0] = -0.16925440270808823;
  params.data_12[1] = 1.442135651787706;
  params.model_12[0] = 0.34501161787128565;
  params.model_12[1] = -0.8660485502711608;
  params.data_13[0] = -0.8880899735055947;
  params.data_13[1] = -0.1815116979122129;
  params.model_13[0] = -1.17835862158005;
  params.model_13[1] = -1.1944851558277074;
  params.data_14[0] = 0.05614023926976763;
  params.data_14[1] = -1.6510825248767813;
  params.model_14[0] = -0.06565787059365391;
  params.model_14[1] = -0.5512951504486665;
  params.data_15[0] = 0.8307464872626844;
  params.data_15[1] = 0.9869848924080182;
  params.model_15[0] = 0.7643716874230573;
  params.model_15[1] = 0.7567216550196565;
  params.data_16[0] = -0.5055995034042868;
  params.data_16[1] = 0.6725392189410702;
  params.model_16[0] = -0.6406053441727284;
  params.model_16[1] = 0.29117547947550015;
  params.data_17[0] = -0.6967713677405021;
  params.data_17[1] = -0.21941980294587182;
  params.model_17[0] = -1.753884276680243;
  params.model_17[1] = -1.0292983112626475;
  params.data_18[0] = 1.8864104246942706;
  params.data_18[1] = -1.077663182579704;
  params.model_18[0] = 0.7659100437893209;
  params.model_18[1] = 0.6019074328549583;
  params.data_19[0] = 0.8957565577499285;
  params.data_19[1] = -0.09964555746227477;
  params.model_19[0] = 0.38665509840745127;
  params.model_19[1] = -1.7321223042686946;
  params.data_20[0] = -1.7097514487110663;
  params.data_20[1] = -1.2040958948116867;
  params.model_20[0] = -1.3925560119658358;
  params.model_20[1] = -1.5995826216742213;
  params.data_21[0] = -1.4828245415645833;
  params.data_21[1] = 0.21311092723061398;
  params.model_21[0] = -1.248740700304487;
  params.model_21[1] = 1.808404972124833;
  params.data_22[0] = 0.7264471152297065;
  params.data_22[1] = 0.16407869343908477;
  params.model_22[0] = 0.8287224032315907;
  params.model_22[1] = -0.9444533161899464;
  params.data_23[0] = 1.7069027370149112;
  params.data_23[1] = 1.3567722311998827;
  params.model_23[0] = 0.9052779937121489;
  params.model_23[1] = -0.07904017565835986;
  params.data_24[0] = 1.3684127435065871;
  params.data_24[1] = 0.979009293697437;
  params.model_24[0] = 0.6413036255984501;
  params.model_24[1] = 1.6559010680237511;
  params.data_25[0] = 0.5346622551502991;
  params.data_25[1] = -0.5362376605895625;
  params.model_25[0] = 0.2113782926017822;
  params.model_25[1] = -1.2144776931994525;
  params.data_26[0] = -1.2317108144255875;
  params.data_26[1] = 0.9026784957312834;
  params.model_26[0] = 1.1397468137245244;
  params.model_26[1] = 1.8883934547350631;
  params.data_27[0] = 1.4038856681660068;
  params.data_27[1] = 0.17437730638329096;
  params.model_27[0] = -1.6408365219077408;
  params.model_27[1] = -0.04450702153554875;
  params.data_28[0] = 1.7117453902485025;
  params.data_28[1] = 1.1504727980139053;
  params.model_28[0] = -0.05962309578364744;
  params.model_28[1] = -0.1788825540764547;
  params.data_29[0] = -1.1280569263625857;
  params.data_29[1] = -1.2911464767927057;
  params.model_29[0] = -1.7055053231225696;
  params.model_29[1] = 1.56957275034837;
  params.data_30[0] = 0.5607064675962357;
  params.data_30[1] = -1.4266707301147146;
  params.model_30[0] = -0.3434923211351708;
  params.model_30[1] = -1.8035643024085055;
  params.data_31[0] = -1.1625066019105454;
  params.data_31[1] = 0.9228324965161532;
  params.model_31[0] = 0.6044910817663975;
  params.model_31[1] = -0.0840868104920891;
  params.data_32[0] = -0.900877978017443;
  params.data_32[1] = 0.608892500264739;
  params.model_32[0] = 1.8257980452695217;
  params.model_32[1] = -0.25791777529922877;
  params.data_33[0] = -1.7194699796493191;
  params.data_33[1] = -1.7690740487081298;
  params.model_33[0] = -1.6685159248097703;
  params.model_33[1] = 1.8388287490128845;
  params.data_34[0] = 0.16304334474597537;
  params.data_34[1] = 1.3498497306788897;
  params.model_34[0] = -1.3198658230514613;
  params.model_34[1] = -0.9586197090843394;
  params.data_35[0] = 0.7679100474913709;
  params.data_35[1] = 1.5822813125679343;
  params.model_35[0] = -0.6372460621593619;
  params.model_35[1] = -1.741307208038867;
  params.data_36[0] = 1.456478677642575;
  params.data_36[1] = -0.8365102166820959;
  params.model_36[0] = 0.9643296255982503;
  params.model_36[1] = -1.367865381194024;
  params.data_37[0] = 0.7798537405635035;
  params.data_37[1] = 1.3656784761245926;
  params.model_37[0] = 0.9086083149868371;
  params.model_37[1] = -0.5635699005460344;
  params.data_38[0] = 0.9067590059607915;
  params.data_38[1] = -1.4421315032701587;
  params.model_38[0] = -0.7447235390671119;
  params.model_38[1] = -0.32166897326822186;
  params.data_39[0] = 1.5088481557772684;
  params.data_39[1] = -1.385039165715428;
  params.model_39[0] = 1.5204991609972622;
  params.model_39[1] = 1.1958572768832156;
  params.data_40[0] = 1.8864971883119228;
  params.data_40[1] = -0.5291880667861584;
  params.model_40[0] = -1.1802409243688836;
  params.model_40[1] = -1.037718718661604;
  params.data_41[0] = 1.3114512056856835;
  params.data_41[1] = 1.8609125943756615;
  params.model_41[0] = 0.7952399935216938;
  params.model_41[1] = -0.07001183290468038;
  params.data_42[0] = -0.8518009412754686;
  params.data_42[1] = 1.3347515373726386;
  params.model_42[0] = 1.4887180335977037;
  params.model_42[1] = -1.6314736327976336;
  params.data_43[0] = -1.1362021159208933;
  params.data_43[1] = 1.327044361831466;
  params.model_43[0] = 1.3932155883179842;
  params.model_43[1] = -0.7413880049440107;
  params.data_44[0] = -0.8828216126125747;
  params.data_44[1] = -0.27673991192616;
  params.model_44[0] = 0.15778600105866714;
  params.model_44[1] = -1.6177327399735457;
  params.data_45[0] = 1.3476485548544606;
  params.data_45[1] = 0.13893948140528378;
  params.model_45[0] = 1.0998712601636944;
  params.model_45[1] = -1.0766549376946926;
  params.data_46[0] = 1.8611734044254629;
  params.data_46[1] = 1.0041092292735172;
  params.model_46[0] = -0.6276245424321543;
  params.model_46[1] = 1.794110587839819;
  params.data_47[0] = 0.8020471158650913;
  params.data_47[1] = 1.362244341944948;
  params.model_47[0] = -1.8180107765765245;
  params.model_47[1] = -1.7774338357932473;
  params.data_48[0] = 0.9709490941985153;
  params.data_48[1] = -0.7812542682064318;
  params.model_48[0] = 0.0671374633729811;
  params.model_48[1] = -1.374950305314906;
  params.data_49[0] = 1.9118096386279388;
  params.data_49[1] = 0.011004190697677885;
  params.model_49[0] = 1.3160043138989015;
  params.model_49[1] = -1.7038488148800144;
  params.data_50[0] = -0.08433819112864738;
  params.data_50[1] = -1.7508820783768964;
  params.model_50[0] = 1.536965724350949;
  params.model_50[1] = -0.21675928514816478;
  params.data_51[0] = -1.725800326952653;
  params.data_51[1] = -1.6940148707361717;
  params.model_51[0] = 0.15517063201268;
  params.model_51[1] = -1.697734381979077;
  params.data_52[0] = -1.264910727950229;
  params.data_52[1] = -0.2545716633339441;
  params.model_52[0] = -0.008868675926170244;
  params.model_52[1] = 0.3332476609670296;
  params.data_53[0] = 0.48205072561962936;
  params.data_53[1] = -0.5087540014293261;
  params.model_53[0] = 0.4749463319223195;
  params.model_53[1] = -1.371021366459455;
  params.data_54[0] = -0.8979660982652256;
  params.data_54[1] = 1.194873082385242;
  params.model_54[0] = -1.3876427970939353;
  params.model_54[1] = -1.106708108457053;
  params.data_55[0] = -1.0280872812241797;
  params.data_55[1] = -0.08197078070773234;
  params.model_55[0] = -1.9970179118324083;
  params.model_55[1] = -1.878754557910134;
  params.data_56[0] = -0.15380739340877803;
  params.data_56[1] = -1.349917260533923;
  params.model_56[0] = 0.7180072150931407;
  params.model_56[1] = 1.1808183487065538;
  params.data_57[0] = 0.31265343495084075;
  params.data_57[1] = 0.7790599086928229;
  params.model_57[0] = -0.4361679370644853;
  params.model_57[1] = -1.8148151880282066;
  params.data_58[0] = -0.24231386948140266;
  params.data_58[1] = -0.5120787511622411;
  params.model_58[0] = 0.3880129688013203;
  params.model_58[1] = -1.4631273212038676;
  params.data_59[0] = -1.0891484131126563;
  params.data_59[1] = 1.2591296661091191;
  params.model_59[0] = -0.9426978934391474;
  params.model_59[1] = -0.358719180371347;
  params.data_60[0] = 1.7438887059831263;
  params.data_60[1] = -0.8977901479165817;
  params.model_60[0] = -1.4188401645857445;
  params.model_60[1] = 0.8080805173258092;
  params.data_61[0] = 0.2682662017650985;
  params.data_61[1] = 0.44637534218638786;
  params.model_61[0] = -1.8318765960257055;
  params.model_61[1] = -0.3309324209710929;
  params.data_62[0] = -1.9829342633313622;
  params.data_62[1] = -1.013858124556442;
  params.model_62[0] = 0.8242247343360254;
  params.model_62[1] = -1.753837136317201;
  params.data_63[0] = -0.8212260055868805;
  params.data_63[1] = 1.9524510112487126;
  params.model_63[0] = 1.884888920907902;
  params.model_63[1] = -0.0726144452811801;
  params.data_64[0] = 0.9427735461129836;
  params.data_64[1] = 0.5306230967445558;
  params.model_64[0] = -0.1372277142250531;
  params.model_64[1] = 1.4282657305652786;
  params.data_65[0] = -1.309926991335284;
  params.data_65[1] = 1.3137276889764422;
  params.model_65[0] = -1.8317219061667278;
  params.model_65[1] = 1.4678147672511939;
  params.data_66[0] = 0.703986349872991;
  params.data_66[1] = -0.2163435603565258;
  params.model_66[0] = 0.6862809905371079;
  params.model_66[1] = -0.15852598444303245;
  params.data_67[0] = 1.1200128895143409;
  params.data_67[1] = -1.5462236645435308;
  params.model_67[0] = 0.0326297153944215;
  params.model_67[1] = 1.4859581597754916;
  params.data_68[0] = 1.71011710324809;
  params.data_68[1] = -1.1186546738067493;
  params.model_68[0] = -0.9922787897815244;
  params.model_68[1] = 1.6160498864359547;
  params.data_69[0] = -0.6179306451394861;
  params.data_69[1] = -1.7725097038051376;
  params.model_69[0] = 0.8595466884481313;
  params.model_69[1] = -0.3423245633865686;
  params.data_70[0] = 0.9412967499805762;
  params.data_70[1] = -0.09163346622652258;
  params.model_70[0] = 0.002262217745727657;
  params.model_70[1] = -0.3297523583656421;
  params.data_71[0] = -0.8380604158593941;
  params.data_71[1] = 1.6028434695494038;
  params.model_71[0] = 0.675150311940429;
  params.model_71[1] = 1.1553293733718686;
  params.data_72[0] = 1.5829581243724693;
  params.data_72[1] = -0.9992442304425597;
  params.model_72[0] = 1.6792824558896897;
  params.model_72[1] = 1.4504203490342324;
  params.data_73[0] = 0.02434104849994556;
  params.data_73[1] = 0.27160869657612263;
  params.model_73[0] = -1.5402710478528858;
  params.model_73[1] = 1.0484633622310744;
  params.data_74[0] = -1.3070999712627054;
  params.data_74[1] = 0.13534416402363814;
  params.model_74[0] = -1.4942507790851232;
  params.model_74[1] = -1.708331625671371;
  params.data_75[0] = 0.436109775042258;
  params.data_75[1] = -0.03518748153727991;
  params.model_75[0] = 0.6992397389570906;
  params.model_75[1] = 1.1634167322171374;
  params.data_76[0] = 1.9307499705822648;
  params.data_76[1] = -1.6636772756932747;
  params.model_76[0] = 0.5248484497343218;
  params.model_76[1] = 0.30789958152579144;
  params.data_77[0] = 0.602568707166812;
  params.data_77[1] = 0.17271781925751872;
  params.model_77[0] = 0.2294695501208066;
  params.model_77[1] = 1.4742185345619543;
  params.data_78[0] = -0.1919535345136989;
  params.data_78[1] = 0.13990231452144553;
  params.model_78[0] = 0.7638548150610602;
  params.model_78[1] = -1.6420200344195646;
  params.data_79[0] = -0.27229872445076087;
  params.data_79[1] = -1.5914631171820468;
  params.model_79[0] = -1.4487604283558668;
  params.model_79[1] = -1.991497766136364;
  params.data_80[0] = -1.1611742553535152;
  params.data_80[1] = -1.133450950247063;
  params.model_80[0] = 0.06497792493777155;
  params.model_80[1] = 0.28083295396097263;
  params.data_81[0] = 1.2958447220129887;
  params.data_81[1] = -0.05315524470737154;
  params.model_81[0] = 1.5658183956871667;
  params.model_81[1] = -0.41975684089933685;
  params.data_82[0] = 0.97844578833777;
  params.data_82[1] = 0.2110290496695293;
  params.model_82[0] = 0.4953003430893044;
  params.model_82[1] = -0.9184320124667495;
  params.data_83[0] = 1.750380031759156;
  params.data_83[1] = 1.0786188614315915;
  params.model_83[0] = -1.4176198837203735;
  params.model_83[1] = 0.149737479778294;
  params.data_84[0] = 1.9831452222223418;
  params.data_84[1] = -1.8037746699794734;
  params.model_84[0] = -0.7887206483295461;
  params.model_84[1] = 0.9632534854086652;
  params.data_85[0] = -1.8425542093895406;
  params.data_85[1] = 0.986684363969033;
  params.model_85[0] = 0.2936851199350441;
  params.model_85[1] = 0.9268227022482662;
  params.data_86[0] = 0.20333038350653299;
  params.data_86[1] = 1.7576139132046351;
  params.model_86[0] = -0.614393188398918;
  params.model_86[1] = 0.297877839744912;
  params.data_87[0] = -1.796880083990895;
  params.data_87[1] = 0.21373133661742738;
  params.model_87[0] = -0.32242822540825156;
  params.model_87[1] = 1.9326471511608059;
  params.data_88[0] = 1.7824292753481785;
  params.data_88[1] = -1.4468823405675986;
  params.model_88[0] = -1.8335374338761512;
  params.model_88[1] = -1.5172997317243713;
  params.data_89[0] = -1.229012129120719;
  params.data_89[1] = 0.9046719772422094;
  params.model_89[0] = 0.17591181415489432;
  params.model_89[1] = 0.13970133814112584;
  params.data_90[0] = -0.14185208214985234;
  params.data_90[1] = -1.9732231264739348;
  params.model_90[0] = -0.4301123458221334;
  params.model_90[1] = 1.9957537650387742;
  params.data_91[0] = 1.2811648216477893;
  params.data_91[1] = 0.2914428437588219;
  params.model_91[0] = -1.214148157218884;
  params.model_91[1] = 1.6818776980374155;
  params.data_92[0] = -0.30341101038214635;
  params.data_92[1] = 0.47730909231793106;
  params.model_92[0] = -1.187569373035299;
  params.model_92[1] = -0.6877370247915531;
  params.data_93[0] = -0.6201861482616171;
  params.data_93[1] = -0.4209925183921568;
  params.model_93[0] = -1.9110724537712471;
  params.model_93[1] = 0.6413882087807936;
  params.data_94[0] = -1.3200399280087032;
  params.data_94[1] = 0.41320105301312626;
  params.model_94[0] = 0.4783213861392275;
  params.model_94[1] = 0.7916189857293743;
  params.data_95[0] = -0.8322752558146558;
  params.data_95[1] = -0.8318720537426154;
  params.model_95[0] = 1.0221179076113445;
  params.model_95[1] = -0.4471032189262627;
  params.data_96[0] = -1.3901469561676985;
  params.data_96[1] = 1.6210596051208572;
  params.model_96[0] = -1.9476687601912737;
  params.model_96[1] = 1.5459376306231292;
  params.data_97[0] = -0.830972896191656;
  params.data_97[1] = -0.47269983955176276;
  params.model_97[0] = 1.913620609584223;
  params.model_97[1] = -0.25329703423935124;
  params.data_98[0] = 0.8635279149674653;
  params.data_98[1] = -0.35046893227111564;
  params.model_98[0] = 1.6541432486772365;
  params.model_98[1] = 0.8779619968413503;
  params.data_99[0] = -0.07723284625844862;
  params.data_99[1] = -1.6631134040635196;
  params.model_99[0] = -0.54546452868516;
  params.model_99[1] = -0.03757319061095998;
  params.data_100[0] = -0.864543266194465;
  params.data_100[1] = 0.13856203767859343;
  params.model_100[0] = -1.1613957272733684;
  params.model_100[1] = -0.022681697832835024;
  params.penalty[0] = 1.0560103903142182;
}
