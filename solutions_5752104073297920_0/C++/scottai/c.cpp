#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <deque>
#include <bitset>
#include <string>
#include <vector>
#include <sstream>
#define zero(a) (abs(a)<eps)
#define lowbit(a) ((a)&(-(a)))
#define abs(a) ((a)>0?(a):(-(a)))
#define dj(x1,y1,x2,y2) ((x1)*(x2)+(y1)*(y2))
#define cj(x1,y1,x2,y2) ((x1)*(y2)-(x2)*(y1))
#define dis(x1,y1,x2,y2) (((x2)-(x1))*((x2)-(x1))+((y2)-(y1))*((y2)-(y1)))
const double eps = 1e-9;
const double pi = acos(-1);
const int oo = 1000000000;
const int mod = 1000000007;
const double E = 2.7182818284590452353602874713527;
using namespace std;

double a[1001],b[1001]={448.066795,447.843848,448.247930,448.865054,448.958255,449.017286,448.718252,449.150763,449.312947,449.391293,449.481093,450.035511,449.725652,450.628843,450.232855,450.037956,450.833966,450.751277,451.266861,451.601013,451.511435,451.762518,452.163303,452.040956,452.262004,452.416002,452.840457,452.938782,453.107374,453.080393,452.915358,453.517889,453.632180,453.914534,454.045215,454.072368,454.163400,454.422710,454.556178,454.782751,454.912279,454.939231,455.248898,455.048090,455.498377,456.363120,455.990052,456.324631,456.607960,456.546631,456.762258,456.944132,457.440429,457.714660,457.670060,457.467736,458.057096,458.282811,458.043025,458.462555,458.611462,458.373033,458.976104,459.049952,458.674906,459.338046,459.758607,459.792953,459.845902,459.766920,460.566411,460.566365,460.600970,460.452691,461.277475,460.871543,461.465089,461.392121,461.604003,461.792409,462.086039,461.813482,462.232235,462.336032,462.642173,462.915405,462.865562,462.981463,463.190673,463.368853,463.392025,463.911815,463.771521,464.421318,464.293786,464.339611,464.654806,464.842158,464.907419,464.757834,465.426045,465.330185,465.626736,465.706627,466.094881,466.143616,466.192227,466.401652,467.097904,466.423270,466.828117,466.876916,467.276172,467.647896,467.335322,467.375452,468.163505,468.022513,468.090307,468.098865,468.624832,468.769384,468.879574,468.711013,468.856631,469.164630,469.276729,469.387738,469.686464,470.205477,469.945653,470.529922,470.472776,470.216775,470.699508,471.000480,471.175931,471.209717,471.614199,471.447477,471.752694,471.801708,471.819112,471.858358,472.333347,472.601217,472.247468,472.807000,473.102785,473.121453,473.208308,473.030275,473.570174,473.808769,473.799955,473.870006,474.167609,474.242936,474.382407,474.747719,474.753199,474.817521,474.904398,475.570553,475.615926,475.458137,475.343344,475.698774,475.974184,476.211175,476.256027,476.199815,476.567171,476.687854,477.044279,477.003950,476.799085,477.358429,477.561661,477.367597,477.734298,477.942495,478.240291,478.181360,478.221492,478.730540,478.334431,478.698447,478.735421,478.781872,478.956586,479.112083,479.590716,479.513620,479.548142,479.918490,479.965137,480.072057,480.576361,480.266686,480.707240,480.482512,480.941304,481.026601,481.409863,481.266860,481.794477,481.706287,481.370655,481.909409,482.139826,482.073713,481.911833,482.171569,483.113765,483.067319,482.997054,483.187422,483.615868,483.125878,483.378685,484.034950,483.680776,483.915912,483.940881,484.198143,484.095552,484.193043,484.749090,484.279882,484.641074,485.173596,484.901047,485.218088,484.962768,485.813698,485.725750,485.911874,485.881782,486.262212,486.692269,486.147269,486.467801,486.422738,486.565620,487.237893,486.979466,487.175880,487.216537,487.133516,487.567012,487.453251,487.759447,487.874339,488.430228,488.226061,488.150367,488.547483,488.747944,488.675029,488.550578,488.937968,489.115808,488.813754,489.141432,489.348454,489.527921,489.777183,490.009836,489.999620,489.844214,490.230179,490.608016,490.314887,490.479017,490.792201,490.661174,490.780361,491.105419,490.861220,491.855837,491.279022,491.836056,491.668702,491.814014,491.782949,492.123757,492.327905,492.277097,492.693003,492.443810,492.605292,492.571590,492.710753,493.262642,493.240888,493.067691,493.389969,493.547169,493.317482,493.932986,493.967914,493.977049,494.283518,494.064312,494.467994,494.566529,494.726135,494.744769,495.010905,495.092066,495.357291,494.858948,495.443047,495.737085,495.332167,495.603390,495.847144,495.713636,496.217494,496.098429,496.485689,496.375392,496.457778,496.696715,496.997667,496.954726,496.825466,497.063149,496.998246,497.177660,497.195314,497.325010,497.803617,497.914518,497.514296,497.936840,497.878796,498.122750,498.214763,498.409291,498.472754,498.529227,499.007647,499.109614,499.002555,499.086331,499.305582,499.197647,499.108338,499.687962,499.229777,499.690922,499.828810,499.987711,500.223327,500.180989,500.110062,500.373601,500.217958,500.052763,500.436162,500.604519,500.751413,500.871372,501.189055,501.098110,501.430414,501.350289,501.008771,501.442931,501.233190,501.702851,501.908300,501.880383,502.033743,502.170753,502.332912,502.626109,502.297764,502.294106,502.796015,502.384185,502.913059,503.240026,502.887065,502.812320,503.097247,503.606615,503.347919,503.084240,503.877738,503.395291,503.708321,504.194085,503.862895,504.114294,504.208406,504.481487,504.071235,504.094221,504.556833,504.308325,504.533938,504.570876,504.646691,505.174268,505.021905,504.892980,505.306538,505.353443,505.576501,505.601647,505.611638,505.682128,505.771681,505.535310,506.065645,506.179855,506.197046,506.186330,506.100165,506.493402,506.414005,506.705063,506.756459,507.008922,506.845540,507.202151,507.294676,506.847321,507.284150,506.918794,507.664891,507.515358,507.376069,507.691709,507.436569,507.661962,508.093866,507.824179,507.957341,507.925631,508.216707,508.082785,508.202961,508.685243,508.535854,508.650238,508.887078,508.822813,508.797324,508.518415,509.206038,509.269576,509.097157,509.156100,509.298916,509.135235,509.410393,509.563537,509.478059,509.740392,509.689138,509.804460,509.892126,510.084486,509.774190,510.243853,510.292561,510.149044,510.484468,510.100068,510.247227,510.570528,510.668411,510.946338,510.464011,510.339966,510.717279,511.255856,511.085570,511.024359,510.752926,511.315233,511.135760,511.582064,511.578664,511.533738,511.544148,511.637830,511.760683,511.802176,512.008404,511.622912,511.823261,512.106839,512.240542,512.320739,512.265660,512.248469,512.360713,512.443529,512.609441,512.818515,512.613356,512.510207,512.585677,513.369313,512.853981,512.989936,513.059113,513.478118,512.920278,513.087214,513.260763,513.284593,513.454186,513.142618,513.116814,513.703377,513.699288,513.703969,513.463595,513.680017,514.056400,513.815698,513.926403,513.964239,514.364516,513.784829,514.247667,514.388378,514.214806,514.390932,514.483770,514.337864,514.805243,514.467327,514.822154,514.583880,515.099855,514.942673,515.253074,514.276718,514.848655,514.934857,514.851853,515.053310,515.186825,515.131829,515.133957,515.350751,515.348708,515.538300,515.255863,515.510067,515.638445,515.877063,515.477127,515.626398,515.555887,515.564184,515.752299,515.732663,515.743471,515.864111,515.537048,515.974287,516.338588,516.052204,516.389343,516.318509,516.375375,516.208550,516.349900,516.215736,516.518146,516.174274,516.347435,516.802416,516.759065,516.612003,516.775890,516.567137,516.692701,516.295924,516.689671,516.884547,516.774123,516.549977,516.898196,516.650649,517.172675,517.212194,517.033791,517.081358,517.140820,517.280452,517.443216,517.283796,516.912556,517.262954,517.396279,517.177401,517.398670,517.210256,517.329099,517.257356,517.242190,517.446457,517.332401,517.647622,517.652290,517.203191,517.866438,517.519122,517.860278,517.953424,517.671213,517.705315,517.940663,517.910362,517.984883,518.162001,517.965465,517.786591,518.194880,517.850805,517.798930,518.039338,518.029866,517.894751,518.101963,518.526276,518.280765,518.379301,518.085915,517.815171,518.137490,518.496765,518.180798,518.774066,518.357023,518.645150,518.487626,518.416385,518.348549,518.067713,518.265898,518.180769,518.552323,518.407286,518.396079,518.551488,518.278042,518.365518,518.313496,518.556993,518.687568,518.678200,518.350012,518.822309,518.439181,518.605377,518.803103,518.581515,518.595656,518.758440,518.594964,518.573080,518.555905,518.704076,518.604038,518.521054,518.615393,518.748655,518.588037,518.554764,518.495362,518.818008,518.649702,518.561523,518.370720,518.533081,518.631922,518.343699,518.497470,518.623641,519.092455,518.620833,518.623403,518.525700,518.807610,518.541295,518.830975,518.708412,518.971223,518.383145,518.606062,518.737569,518.469699,518.893921,518.547087,518.712104,518.964951,518.792968,519.015091,518.416038,518.766971,518.580052,518.417242,518.586111,518.808472,518.694614,518.595198,518.851263,518.479331,518.695384,518.803547,519.038691,518.586061,518.595264,518.592367,518.699835,518.860222,518.326179,518.319645,518.336589,518.380861,518.558659,518.861776,518.757012,518.314695,518.820096,518.288274,518.210606,518.340619,518.770758,518.303186,518.444244,518.165522,517.778944,518.208435,518.086120,517.945749,518.282738,518.372596,518.107703,518.148140,518.029805,518.167912,518.090581,518.121915,518.156234,517.911227,518.284344,517.914744,518.273206,518.101670,517.961973,518.482651,517.644634,517.386668,517.866177,517.640153,517.982717,517.444287,517.659123,517.735419,517.102360,517.665638,517.341302,517.449435,517.273744,517.295961,517.426975,517.624955,517.149728,517.169061,517.352486,517.261077,517.038151,517.313631,517.366508,516.623905,517.045502,517.016244,516.982381,516.866543,517.009335,516.777395,516.698248,516.639742,516.739523,516.774209,516.217294,516.547831,517.018484,516.466962,516.654820,516.581723,516.236336,516.287075,516.179921,516.596379,516.139908,516.268437,516.221801,515.792863,516.391858,516.370483,516.053405,515.653787,515.892523,515.844408,515.716643,515.716643,515.603040,515.576174,515.784442,515.843970,515.059621,515.242711,515.480908,515.308488,515.022095,515.420264,515.206920,514.837997,514.623340,514.978765,515.038324,514.845103,514.894770,514.671129,514.620769,514.412132,514.804221,514.567083,514.624635,514.102941,514.226228,514.146382,514.707885,513.944505,514.258202,514.238821,513.603631,513.828996,514.212140,513.887744,513.804819,513.843863,513.272382,513.424258,513.542365,512.910628,513.653174,513.683127,513.514902,513.259982,513.148716,512.993850,513.253264,512.995503,512.932772,512.608007,512.940302,512.086164,512.433076,512.870916,512.926032,512.113538,512.768582,512.369186,511.983475,511.994822,511.980619,511.742624,511.666949,512.200427,511.883799,511.693625,511.353002,511.737886,510.994229,511.167658,510.818065,511.363478,511.417968,510.964598,511.020333,510.742737,510.934134,510.572514,510.726510,510.508146,510.419684,510.579782,510.126310,510.052617,509.898758,510.193855,510.257493,509.884401,509.667124,509.721411,509.333093,509.502953,509.553715,509.248528,509.274984,509.279118,508.921560,508.948231,508.893610,508.485733,508.585994,508.423924,508.462518,508.255164,508.075812,507.836117,507.713249,508.130644,507.764554,507.842448,507.669609,507.318719,507.302964,507.451065,507.511366,507.203965,506.579345,506.841222,506.927188,506.618730,506.471100,507.065478,506.557016,506.279958,506.292045,506.339347,505.993682,506.096809,505.897897,505.460061,505.507221,505.513189,505.321815,505.211281,505.207974,504.873171,504.867956,504.704856,504.504255,504.778436,504.211824,504.120748,504.266618,504.132252,504.465427,503.950898,504.260397,503.461945,503.299974,503.283716,503.580883,502.762614,502.856125,502.934773,502.791860,502.979257,502.800528,502.424711,502.383570,502.179087,502.179465,501.628765,501.792315,501.735980,501.883201,501.549358,501.570293,501.454808,501.141376,500.891705,500.760565,500.585773,500.631467,500.433805,500.344976,500.171256,499.729321,500.061593,499.921567,499.302124,499.271160,499.413805};
double c[1001];

double calc(double x[],double y[])
{
   double ss=0;
   for (int i=0;i<1000;i++)
      ss+=abs(x[i]-y[i])*abs(x[i]-y[i]);
   return ss;
}

int main()
{
   freopen("a.in","r",stdin);
   freopen("a.out","w",stdout);
   for (int i=0;i<1000;i++)
      a[i]=999./2;
   int q;
   cin>>q;
   for (int t=1;t<=q;t++)
   {
      int n;
      printf("Case #%d: ",t);
      scanf("%d",&n);
      for (int i=0;i<n;i++)
         scanf("%lf",&c[i]);
      if (calc(a,c)<calc(b,c))
         printf("GOOD\n");
      else
         printf("BAD\n");
   }
   return 0;
}