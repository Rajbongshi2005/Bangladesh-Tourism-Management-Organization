#include<iostream>
using namespace std;
void City_Distance_Matrix_Making();
void city_number_list();
void City(int city_number);
void sub_Travel_Assistant();
void city_Information();
void city_Assistant_information(int city_number);
void plan_trip_min_distance(int starting_city_number, int ending_city_number, int tourist_index_number, int tourist_choice_number);
void plan_all_city_trip(int starting_city_number, int tourist_index_number, int tourist_choice_number);
void display_city_information(int city_number);
void city_travel_assistant_info();
void main_Travel_Assistant();
void Add_Travel_Assistant();
void Assistant_Login();
void Update_Travel_Assistant(int i);
void city_travel_assistant_info(int city_number);
void main_admin();
void Admin_Login();
void Delete_Travel_Assistant(string email);
void Update_City_Information(int city_number);
void view_all_travel_assistants();
void view_tourist_spots(int city_number);
void view_available_assistants(int city_number);
void Tourist_Login();
void cancel_booking(int tourist_index);
void Add_Tourist();
void Delete_Tourist();
void Update_Tourist();
void Add_Admin();
void Update_Admin();
void Delete_Admin();
void Update_City_Information();
void select_assistant(int tourist_index);
void booking_status(int tourist_index, int flag);
void travel_history(int tourist_index);
void view_all_tourists();
void Update_Travel_Assistant();

float city_to_city_distances_matrix[70][70];


void City_Distance_Matrix_Making()
{
    city_to_city_distances_matrix[0][0]=0;city_to_city_distances_matrix[0][1]=40; city_to_city_distances_matrix[0][2]=25;   city_to_city_distances_matrix[0][3]=65;   city_to_city_distances_matrix[0][4]=35;   city_to_city_distances_matrix[0][5]=55;   city_to_city_distances_matrix[0][6]=100;  city_to_city_distances_matrix[0][7]=110;  city_to_city_distances_matrix[0][8]=145;  city_to_city_distances_matrix[0][9]=110;  city_to_city_distances_matrix[0][10]=220; city_to_city_distances_matrix[0][11]=200; city_to_city_distances_matrix[0][12]=190; city_to_city_distances_matrix[0][13]=265; city_to_city_distances_matrix[0][14]=390; city_to_city_distances_matrix[0][15]=100;city_to_city_distances_matrix[0][16]=95; city_to_city_distances_matrix[0][17]=150; city_to_city_distances_matrix[0][18]=180; city_to_city_distances_matrix[0][19]=170;city_to_city_distances_matrix[0][20]=110;city_to_city_distances_matrix[0][21]=320;city_to_city_distances_matrix[0][22]=340;city_to_city_distances_matrix[0][23]=350;city_to_city_distances_matrix[0][24]=245;city_to_city_distances_matrix[0][25]=270;city_to_city_distances_matrix[0][26]=220; city_to_city_distances_matrix[0][27]=260;  city_to_city_distances_matrix[0][28]=195;  city_to_city_distances_matrix[0][29]=250; city_to_city_distances_matrix[0][30]=160;  city_to_city_distances_matrix[0][31]=140;  city_to_city_distances_matrix[0][32]=270;  city_to_city_distances_matrix[0][33]=300;  city_to_city_distances_matrix[0][34]=320; city_to_city_distances_matrix[0][35]=210;  city_to_city_distances_matrix[0][36]=230; city_to_city_distances_matrix[0][37]=240; city_to_city_distances_matrix[0][38]=220; city_to_city_distances_matrix[0][39]=200;city_to_city_distances_matrix[0][40]=210; city_to_city_distances_matrix[0][41]=220; city_to_city_distances_matrix[0][42]=120; city_to_city_distances_matrix[0][43]=180; city_to_city_distances_matrix[0][44]=140;city_to_city_distances_matrix[0][45]=200; city_to_city_distances_matrix[0][46]=160; city_to_city_distances_matrix[0][47]=220; city_to_city_distances_matrix[0][48]=240; city_to_city_distances_matrix[0][49]=200; city_to_city_distances_matrix[0][50]=190; city_to_city_distances_matrix[0][51]=280;city_to_city_distances_matrix[0][52]=300; city_to_city_distances_matrix[0][53]=290; city_to_city_distances_matrix[0][54]=350; city_to_city_distances_matrix[0][55]=330; city_to_city_distances_matrix[0][56]=320; city_to_city_distances_matrix[0][57]=330; city_to_city_distances_matrix[0][58]=400; city_to_city_distances_matrix[0][59]=420;city_to_city_distances_matrix[0][60]=115;city_to_city_distances_matrix[0][61]=180;city_to_city_distances_matrix[0][62]=200;city_to_city_distances_matrix[0][63]=160;
city_to_city_distances_matrix[1][0]=40;city_to_city_distances_matrix[1][1]=0;city_to_city_distances_matrix[1][2]=35;city_to_city_distances_matrix[1][3]=75;city_to_city_distances_matrix[1][4]=45;city_to_city_distances_matrix[1][5]=30;city_to_city_distances_matrix[1][6]=90;city_to_city_distances_matrix[1][7]=95;city_to_city_distances_matrix[1][8]=160;city_to_city_distances_matrix[1][9]=130;city_to_city_distances_matrix[1][10]=230;city_to_city_distances_matrix[1][11]=210;city_to_city_distances_matrix[1][12]=200;city_to_city_distances_matrix[1][13]=280;city_to_city_distances_matrix[1][14]=400;city_to_city_distances_matrix[1][15]=115;city_to_city_distances_matrix[1][16]=105;city_to_city_distances_matrix[1][17]=160;city_to_city_distances_matrix[1][18]=190;city_to_city_distances_matrix[1][19]=180;city_to_city_distances_matrix[1][20]=120;city_to_city_distances_matrix[1][21]=330;city_to_city_distances_matrix[1][22]=350;city_to_city_distances_matrix[1][23]=360;city_to_city_distances_matrix[1][24]=260;city_to_city_distances_matrix[1][25]=285;city_to_city_distances_matrix[1][26]=235;city_to_city_distances_matrix[1][27]=275;city_to_city_distances_matrix[1][28]=210;city_to_city_distances_matrix[1][29]=265;city_to_city_distances_matrix[1][30]=175;city_to_city_distances_matrix[1][31]=155;city_to_city_distances_matrix[1][32]=285;city_to_city_distances_matrix[1][33]=315;city_to_city_distances_matrix[1][34]=335;city_to_city_distances_matrix[1][35]=225;city_to_city_distances_matrix[1][36]=245;city_to_city_distances_matrix[1][37]=255;city_to_city_distances_matrix[1][38]=235;city_to_city_distances_matrix[1][39]=215;city_to_city_distances_matrix[1][40]=225;city_to_city_distances_matrix[1][41]=235;city_to_city_distances_matrix[1][42]=135;city_to_city_distances_matrix[1][43]=195;city_to_city_distances_matrix[1][44]=155;city_to_city_distances_matrix[1][45]=215;city_to_city_distances_matrix[1][46]=175;city_to_city_distances_matrix[1][47]=235;city_to_city_distances_matrix[1][48]=255;city_to_city_distances_matrix[1][49]=215;city_to_city_distances_matrix[1][50]=205;city_to_city_distances_matrix[1][51]=295;city_to_city_distances_matrix[1][52]=315;city_to_city_distances_matrix[1][53]=305;city_to_city_distances_matrix[1][54]=365;city_to_city_distances_matrix[1][55]=345;city_to_city_distances_matrix[1][56]=335;city_to_city_distances_matrix[1][57]=345;city_to_city_distances_matrix[1][58]=415;city_to_city_distances_matrix[1][59]=435;city_to_city_distances_matrix[1][60]=95;city_to_city_distances_matrix[1][61]=165;city_to_city_distances_matrix[1][62]=185;city_to_city_distances_matrix[1][63]=145; 
city_to_city_distances_matrix[2][0]=25;city_to_city_distances_matrix[2][1]=35; city_to_city_distances_matrix[2][2]=0; city_to_city_distances_matrix[2][3]=70; city_to_city_distances_matrix[2][4]=20; city_to_city_distances_matrix[2][5]=50; city_to_city_distances_matrix[2][6]=105; city_to_city_distances_matrix[2][7]=115; city_to_city_distances_matrix[2][8]=150;city_to_city_distances_matrix[2][9]=120; city_to_city_distances_matrix[2][10]=225;city_to_city_distances_matrix[2][11]=205;city_to_city_distances_matrix[2][12]=195; city_to_city_distances_matrix[2][13]=255; city_to_city_distances_matrix[2][14]=380;city_to_city_distances_matrix[2][15]=90; city_to_city_distances_matrix[2][16]=80; city_to_city_distances_matrix[2][17]=140; city_to_city_distances_matrix[2][18]=170; city_to_city_distances_matrix[2][19]=160; city_to_city_distances_matrix[2][20]=100; city_to_city_distances_matrix[2][21]=310; city_to_city_distances_matrix[2][22]=330; city_to_city_distances_matrix[2][23]=340;city_to_city_distances_matrix[2][24]=240; city_to_city_distances_matrix[2][25]=265; city_to_city_distances_matrix[2][26]=215; city_to_city_distances_matrix[2][27]=255; city_to_city_distances_matrix[2][28]=190; city_to_city_distances_matrix[2][29]=245; city_to_city_distances_matrix[2][30]=155; city_to_city_distances_matrix[2][31]=135; city_to_city_distances_matrix[2][32]=260; city_to_city_distances_matrix[2][33]=290; city_to_city_distances_matrix[2][34]=310; city_to_city_distances_matrix[2][35]=200; city_to_city_distances_matrix[2][36]=220; city_to_city_distances_matrix[2][37]=230; city_to_city_distances_matrix[2][38]=210; city_to_city_distances_matrix[2][39]=190; city_to_city_distances_matrix[2][40]=200; city_to_city_distances_matrix[2][41]=210; city_to_city_distances_matrix[2][42]=110; city_to_city_distances_matrix[2][43]=170; city_to_city_distances_matrix[2][44]=130; city_to_city_distances_matrix[2][45]=190; city_to_city_distances_matrix[2][46]=150;city_to_city_distances_matrix[2][47]=210; city_to_city_distances_matrix[2][48]=230;city_to_city_distances_matrix[2][49]=190;city_to_city_distances_matrix[2][50]=180; city_to_city_distances_matrix[2][51]=270; city_to_city_distances_matrix[2][52]=290;city_to_city_distances_matrix[2][53]=280; city_to_city_distances_matrix[2][54]=340; city_to_city_distances_matrix[2][55]=320; city_to_city_distances_matrix[2][56]=310; city_to_city_distances_matrix[2][57]=320; city_to_city_distances_matrix[2][58]=390; city_to_city_distances_matrix[2][59]=410; city_to_city_distances_matrix[2][60]=100;city_to_city_distances_matrix[2][61]=170; city_to_city_distances_matrix[2][62]=190;city_to_city_distances_matrix[2][63]=150;
city_to_city_distances_matrix[3][0]=65;city_to_city_distances_matrix[3][1]=75;city_to_city_distances_matrix[3][2]=70;city_to_city_distances_matrix[3][3]=0;city_to_city_distances_matrix[3][4]=60;city_to_city_distances_matrix[3][5]=85;city_to_city_distances_matrix[3][6]=55;city_to_city_distances_matrix[3][7]=120;city_to_city_distances_matrix[3][8]=110;city_to_city_distances_matrix[3][9]=90;city_to_city_distances_matrix[3][10]=180;city_to_city_distances_matrix[3][11]=160;city_to_city_distances_matrix[3][12]=150;city_to_city_distances_matrix[3][13]=300;city_to_city_distances_matrix[3][14]=420;city_to_city_distances_matrix[3][15]=130;city_to_city_distances_matrix[3][16]=120;city_to_city_distances_matrix[3][17]=180;city_to_city_distances_matrix[3][18]=210;city_to_city_distances_matrix[3][19]=200;city_to_city_distances_matrix[3][20]=140;city_to_city_distances_matrix[3][21]=350;city_to_city_distances_matrix[3][22]=370;city_to_city_distances_matrix[3][23]=380;city_to_city_distances_matrix[3][24]=180;city_to_city_distances_matrix[3][25]=205;city_to_city_distances_matrix[3][26]=155;city_to_city_distances_matrix[3][27]=195;city_to_city_distances_matrix[3][28]=130;city_to_city_distances_matrix[3][29]=185;city_to_city_distances_matrix[3][30]=95;city_to_city_distances_matrix[3][31]=75;city_to_city_distances_matrix[3][32]=240;city_to_city_distances_matrix[3][33]=270;city_to_city_distances_matrix[3][34]=290;city_to_city_distances_matrix[3][35]=180;city_to_city_distances_matrix[3][36]=200;city_to_city_distances_matrix[3][37]=210;city_to_city_distances_matrix[3][38]=190;city_to_city_distances_matrix[3][39]=170;city_to_city_distances_matrix[3][40]=180;city_to_city_distances_matrix[3][41]=190;city_to_city_distances_matrix[3][42]=140;city_to_city_distances_matrix[3][43]=200;city_to_city_distances_matrix[3][44]=160;city_to_city_distances_matrix[3][45]=220;city_to_city_distances_matrix[3][46]=180;city_to_city_distances_matrix[3][47]=240;city_to_city_distances_matrix[3][48]=260;city_to_city_distances_matrix[3][49]=220;city_to_city_distances_matrix[3][50]=210;city_to_city_distances_matrix[3][51]=300;city_to_city_distances_matrix[3][52]=270;city_to_city_distances_matrix[3][53]=260;city_to_city_distances_matrix[3][54]=320;city_to_city_distances_matrix[3][55]=300;city_to_city_distances_matrix[3][56]=290;city_to_city_distances_matrix[3][57]=300;city_to_city_distances_matrix[3][58]=370;city_to_city_distances_matrix[3][59]=390;city_to_city_distances_matrix[3][60]=130;city_to_city_distances_matrix[3][61]=200;city_to_city_distances_matrix[3][62]=220;city_to_city_distances_matrix[3][63]=180;
city_to_city_distances_matrix[4][0]=35;city_to_city_distances_matrix[4][1]=45;city_to_city_distances_matrix[4][2]=20;city_to_city_distances_matrix[4][3]=60;city_to_city_distances_matrix[4][4]=0;city_to_city_distances_matrix[4][5]=65;city_to_city_distances_matrix[4][6]=110;city_to_city_distances_matrix[4][7]=120;city_to_city_distances_matrix[4][8]=120;city_to_city_distances_matrix[4][9]=95;city_to_city_distances_matrix[4][10]=170;city_to_city_distances_matrix[4][11]=140;city_to_city_distances_matrix[4][12]=130;city_to_city_distances_matrix[4][13]=270;city_to_city_distances_matrix[4][14]=395;city_to_city_distances_matrix[4][15]=105;city_to_city_distances_matrix[4][16]=85;city_to_city_distances_matrix[4][17]=150;city_to_city_distances_matrix[4][18]=180;city_to_city_distances_matrix[4][19]=170;city_to_city_distances_matrix[4][20]=115;city_to_city_distances_matrix[4][21]=325;city_to_city_distances_matrix[4][22]=345;city_to_city_distances_matrix[4][23]=355;city_to_city_distances_matrix[4][24]=220;city_to_city_distances_matrix[4][25]=245;city_to_city_distances_matrix[4][26]=195;city_to_city_distances_matrix[4][27]=235;city_to_city_distances_matrix[4][28]=170;city_to_city_distances_matrix[4][29]=225;city_to_city_distances_matrix[4][30]=135;city_to_city_distances_matrix[4][31]=115;city_to_city_distances_matrix[4][32]=230;city_to_city_distances_matrix[4][33]=260;city_to_city_distances_matrix[4][34]=280;city_to_city_distances_matrix[4][35]=170;city_to_city_distances_matrix[4][36]=190;city_to_city_distances_matrix[4][37]=200;city_to_city_distances_matrix[4][38]=180;city_to_city_distances_matrix[4][39]=160;city_to_city_distances_matrix[4][40]=170;city_to_city_distances_matrix[4][41]=180;city_to_city_distances_matrix[4][42]=110;city_to_city_distances_matrix[4][43]=170;city_to_city_distances_matrix[4][44]=130;city_to_city_distances_matrix[4][45]=190;city_to_city_distances_matrix[4][46]=150;city_to_city_distances_matrix[4][47]=210;city_to_city_distances_matrix[4][48]=235;city_to_city_distances_matrix[4][49]=195;city_to_city_distances_matrix[4][50]=185;city_to_city_distances_matrix[4][51]=275;city_to_city_distances_matrix[4][52]=285;city_to_city_distances_matrix[4][53]=275;city_to_city_distances_matrix[4][54]=335;city_to_city_distances_matrix[4][55]=315;city_to_city_distances_matrix[4][56]=305;city_to_city_distances_matrix[4][57]=315;city_to_city_distances_matrix[4][58]=385;city_to_city_distances_matrix[4][59]=405;city_to_city_distances_matrix[4][60]=120;city_to_city_distances_matrix[4][61]=190;city_to_city_distances_matrix[4][62]=210;city_to_city_distances_matrix[4][63]=170; 
city_to_city_distances_matrix[5][0]=55;city_to_city_distances_matrix[5][1]=30;city_to_city_distances_matrix[5][2]=50;city_to_city_distances_matrix[5][3]=85;city_to_city_distances_matrix[5][4]=65;city_to_city_distances_matrix[5][5]=0;city_to_city_distances_matrix[5][6]=95;city_to_city_distances_matrix[5][7]=70;city_to_city_distances_matrix[5][8]=165;city_to_city_distances_matrix[5][9]=135;city_to_city_distances_matrix[5][10]=235;city_to_city_distances_matrix[5][11]=215;city_to_city_distances_matrix[5][12]=205;city_to_city_distances_matrix[5][13]=260;city_to_city_distances_matrix[5][14]=385;city_to_city_distances_matrix[5][15]=95;city_to_city_distances_matrix[5][16]=85;city_to_city_distances_matrix[5][17]=140;city_to_city_distances_matrix[5][18]=170;city_to_city_distances_matrix[5][19]=160;city_to_city_distances_matrix[5][20]=40;city_to_city_distances_matrix[5][21]=300;city_to_city_distances_matrix[5][22]=320;city_to_city_distances_matrix[5][23]=320;city_to_city_distances_matrix[5][24]=255;city_to_city_distances_matrix[5][25]=280;city_to_city_distances_matrix[5][26]=230;city_to_city_distances_matrix[5][27]=270;city_to_city_distances_matrix[5][28]=205;city_to_city_distances_matrix[5][29]=260;city_to_city_distances_matrix[5][30]=170;city_to_city_distances_matrix[5][31]=150;city_to_city_distances_matrix[5][32]=275;city_to_city_distances_matrix[5][33]=305;city_to_city_distances_matrix[5][34]=325;city_to_city_distances_matrix[5][35]=215;city_to_city_distances_matrix[5][36]=235;city_to_city_distances_matrix[5][37]=245;city_to_city_distances_matrix[5][38]=225;city_to_city_distances_matrix[5][39]=205;city_to_city_distances_matrix[5][40]=215;city_to_city_distances_matrix[5][41]=225;city_to_city_distances_matrix[5][42]=125;city_to_city_distances_matrix[5][43]=185;city_to_city_distances_matrix[5][44]=145;city_to_city_distances_matrix[5][45]=205;city_to_city_distances_matrix[5][46]=165;city_to_city_distances_matrix[5][47]=225;city_to_city_distances_matrix[5][48]=220;city_to_city_distances_matrix[5][49]=180;city_to_city_distances_matrix[5][50]=170;city_to_city_distances_matrix[5][51]=275;city_to_city_distances_matrix[5][52]=310;city_to_city_distances_matrix[5][53]=300;city_to_city_distances_matrix[5][54]=360;city_to_city_distances_matrix[5][55]=340;city_to_city_distances_matrix[5][56]=330;city_to_city_distances_matrix[5][57]=340;city_to_city_distances_matrix[5][58]=410;city_to_city_distances_matrix[5][59]=405;city_to_city_distances_matrix[5][60]=85;city_to_city_distances_matrix[5][61]=155;city_to_city_distances_matrix[5][62]=175;city_to_city_distances_matrix[5][63]=135;
city_to_city_distances_matrix[6][0]=100;city_to_city_distances_matrix[6][1]=90;city_to_city_distances_matrix[6][2]=105;city_to_city_distances_matrix[6][3]=55;city_to_city_distances_matrix[6][4]=110;city_to_city_distances_matrix[6][5]=95;city_to_city_distances_matrix[6][6]=0;city_to_city_distances_matrix[6][7]=60;city_to_city_distances_matrix[6][8]=140;city_to_city_distances_matrix[6][9]=120;city_to_city_distances_matrix[6][10]=190;city_to_city_distances_matrix[6][11]=170;city_to_city_distances_matrix[6][12]=160;city_to_city_distances_matrix[6][13]=310;city_to_city_distances_matrix[6][14]=435;city_to_city_distances_matrix[6][15]=140;city_to_city_distances_matrix[6][16]=130;city_to_city_distances_matrix[6][17]=180;city_to_city_distances_matrix[6][18]=210;city_to_city_distances_matrix[6][19]=200;city_to_city_distances_matrix[6][20]=150;city_to_city_distances_matrix[6][21]=360;city_to_city_distances_matrix[6][22]=380;city_to_city_distances_matrix[6][23]=390;city_to_city_distances_matrix[6][24]=140;city_to_city_distances_matrix[6][25]=165;city_to_city_distances_matrix[6][26]=115;city_to_city_distances_matrix[6][27]=155;city_to_city_distances_matrix[6][28]=90;city_to_city_distances_matrix[6][29]=145;city_to_city_distances_matrix[6][30]=55;city_to_city_distances_matrix[6][31]=35;city_to_city_distances_matrix[6][32]=185;city_to_city_distances_matrix[6][33]=215;city_to_city_distances_matrix[6][34]=235;city_to_city_distances_matrix[6][35]=125;city_to_city_distances_matrix[6][36]=145;city_to_city_distances_matrix[6][37]=155;city_to_city_distances_matrix[6][38]=135;city_to_city_distances_matrix[6][39]=115;city_to_city_distances_matrix[6][40]=125;city_to_city_distances_matrix[6][41]=135;city_to_city_distances_matrix[6][42]=155;city_to_city_distances_matrix[6][43]=215;city_to_city_distances_matrix[6][44]=175;city_to_city_distances_matrix[6][45]=235;city_to_city_distances_matrix[6][46]=195;city_to_city_distances_matrix[6][47]=255;city_to_city_distances_matrix[6][48]=250;city_to_city_distances_matrix[6][49]=210;city_to_city_distances_matrix[6][50]=200;city_to_city_distances_matrix[6][51]=290;city_to_city_distances_matrix[6][52]=280;city_to_city_distances_matrix[6][53]=270;city_to_city_distances_matrix[6][54]=330;city_to_city_distances_matrix[6][55]=310;city_to_city_distances_matrix[6][56]=300;city_to_city_distances_matrix[6][57]=310;city_to_city_distances_matrix[6][58]=380;city_to_city_distances_matrix[6][59]=400;city_to_city_distances_matrix[6][60]=120;city_to_city_distances_matrix[6][61]=90;city_to_city_distances_matrix[6][62]=110;city_to_city_distances_matrix[6][63]=85;
city_to_city_distances_matrix[7][0]=110;city_to_city_distances_matrix[7][1]=95;city_to_city_distances_matrix[7][2]=115;city_to_city_distances_matrix[7][3]=120;city_to_city_distances_matrix[7][4]=120;city_to_city_distances_matrix[7][5]=70;city_to_city_distances_matrix[7][6]=60;city_to_city_distances_matrix[7][7]=0;city_to_city_distances_matrix[7][8]=130;city_to_city_distances_matrix[7][9]=110;city_to_city_distances_matrix[7][10]=180;city_to_city_distances_matrix[7][11]=160;city_to_city_distances_matrix[7][12]=150;city_to_city_distances_matrix[7][13]=320;city_to_city_distances_matrix[7][14]=445;city_to_city_distances_matrix[7][15]=150;city_to_city_distances_matrix[7][16]=140;city_to_city_distances_matrix[7][17]=190;city_to_city_distances_matrix[7][18]=220;city_to_city_distances_matrix[7][19]=210;city_to_city_distances_matrix[7][20]=160;city_to_city_distances_matrix[7][21]=370;city_to_city_distances_matrix[7][22]=390;city_to_city_distances_matrix[7][23]=400;city_to_city_distances_matrix[7][24]=150;city_to_city_distances_matrix[7][25]=175;city_to_city_distances_matrix[7][26]=125;city_to_city_distances_matrix[7][27]=165;city_to_city_distances_matrix[7][28]=100;city_to_city_distances_matrix[7][29]=155;city_to_city_distances_matrix[7][30]=65;city_to_city_distances_matrix[7][31]=45;city_to_city_distances_matrix[7][32]=195;city_to_city_distances_matrix[7][33]=225;city_to_city_distances_matrix[7][34]=245;city_to_city_distances_matrix[7][35]=135;city_to_city_distances_matrix[7][36]=155;city_to_city_distances_matrix[7][37]=165;city_to_city_distances_matrix[7][38]=145;city_to_city_distances_matrix[7][39]=125;city_to_city_distances_matrix[7][40]=135;city_to_city_distances_matrix[7][41]=145;city_to_city_distances_matrix[7][42]=165;city_to_city_distances_matrix[7][43]=225;city_to_city_distances_matrix[7][44]=185;city_to_city_distances_matrix[7][45]=245;city_to_city_distances_matrix[7][46]=205;city_to_city_distances_matrix[7][47]=265;city_to_city_distances_matrix[7][48]=260;city_to_city_distances_matrix[7][49]=220;city_to_city_distances_matrix[7][50]=210;city_to_city_distances_matrix[7][51]=300;city_to_city_distances_matrix[7][52]=290;city_to_city_distances_matrix[7][53]=280;city_to_city_distances_matrix[7][54]=340;city_to_city_distances_matrix[7][55]=320;city_to_city_distances_matrix[7][56]=310;city_to_city_distances_matrix[7][57]=320;city_to_city_distances_matrix[7][58]=390;city_to_city_distances_matrix[7][59]=410;city_to_city_distances_matrix[7][60]=125;city_to_city_distances_matrix[7][61]=95;city_to_city_distances_matrix[7][62]=115;city_to_city_distances_matrix[7][63]=90;
city_to_city_distances_matrix[8][0]=145;city_to_city_distances_matrix[8][1]=160;city_to_city_distances_matrix[8][2]=150;city_to_city_distances_matrix[8][3]=110;city_to_city_distances_matrix[8][4]=120;city_to_city_distances_matrix[8][5]=165;city_to_city_distances_matrix[8][6]=140;city_to_city_distances_matrix[8][7]=130;city_to_city_distances_matrix[8][8]=0;city_to_city_distances_matrix[8][9]=40;city_to_city_distances_matrix[8][10]=120;city_to_city_distances_matrix[8][11]=100;city_to_city_distances_matrix[8][12]=90;city_to_city_distances_matrix[8][13]=320;city_to_city_distances_matrix[8][14]=440;city_to_city_distances_matrix[8][15]=140;city_to_city_distances_matrix[8][16]=135;city_to_city_distances_matrix[8][17]=180;city_to_city_distances_matrix[8][18]=210;city_to_city_distances_matrix[8][19]=200;city_to_city_distances_matrix[8][20]=160;city_to_city_distances_matrix[8][21]=380;city_to_city_distances_matrix[8][22]=400;city_to_city_distances_matrix[8][23]=410;city_to_city_distances_matrix[8][24]=200;city_to_city_distances_matrix[8][25]=225;city_to_city_distances_matrix[8][26]=175;city_to_city_distances_matrix[8][27]=215;city_to_city_distances_matrix[8][28]=150;city_to_city_distances_matrix[8][29]=205;city_to_city_distances_matrix[8][30]=115;city_to_city_distances_matrix[8][31]=95;city_to_city_distances_matrix[8][32]=250;city_to_city_distances_matrix[8][33]=280;city_to_city_distances_matrix[8][34]=300;city_to_city_distances_matrix[8][35]=190;city_to_city_distances_matrix[8][36]=210;city_to_city_distances_matrix[8][37]=220;city_to_city_distances_matrix[8][38]=200;city_to_city_distances_matrix[8][39]=180;city_to_city_distances_matrix[8][40]=190;city_to_city_distances_matrix[8][41]=200;city_to_city_distances_matrix[8][42]=160;city_to_city_distances_matrix[8][43]=220;city_to_city_distances_matrix[8][44]=180;city_to_city_distances_matrix[8][45]=240;city_to_city_distances_matrix[8][46]=200;city_to_city_distances_matrix[8][47]=260;city_to_city_distances_matrix[8][48]=300;city_to_city_distances_matrix[8][49]=260;city_to_city_distances_matrix[8][50]=250;city_to_city_distances_matrix[8][51]=340;city_to_city_distances_matrix[8][52]=260;city_to_city_distances_matrix[8][53]=250;city_to_city_distances_matrix[8][54]=310;city_to_city_distances_matrix[8][55]=290;city_to_city_distances_matrix[8][56]=280;city_to_city_distances_matrix[8][57]=290;city_to_city_distances_matrix[8][58]=360;city_to_city_distances_matrix[8][59]=380;city_to_city_distances_matrix[8][60]=150;city_to_city_distances_matrix[8][61]=120;city_to_city_distances_matrix[8][62]=140;city_to_city_distances_matrix[8][63]=110;
city_to_city_distances_matrix[9][0]=110;city_to_city_distances_matrix[9][1]=130;city_to_city_distances_matrix[9][2]=120;city_to_city_distances_matrix[9][3]=90;city_to_city_distances_matrix[9][4]=95;city_to_city_distances_matrix[9][5]=135;city_to_city_distances_matrix[9][6]=120;city_to_city_distances_matrix[9][7]=110;city_to_city_distances_matrix[9][8]=40;city_to_city_distances_matrix[9][9]=0;city_to_city_distances_matrix[9][10]=100;city_to_city_distances_matrix[9][11]=80;city_to_city_distances_matrix[9][12]=70;city_to_city_distances_matrix[9][13]=310;city_to_city_distances_matrix[9][14]=430;city_to_city_distances_matrix[9][15]=130;city_to_city_distances_matrix[9][16]=125;city_to_city_distances_matrix[9][17]=170;city_to_city_distances_matrix[9][18]=200;city_to_city_distances_matrix[9][19]=190;city_to_city_distances_matrix[9][20]=150;city_to_city_distances_matrix[9][21]=370;city_to_city_distances_matrix[9][22]=390;city_to_city_distances_matrix[9][23]=400;city_to_city_distances_matrix[9][24]=190;city_to_city_distances_matrix[9][25]=215;city_to_city_distances_matrix[9][26]=165;city_to_city_distances_matrix[9][27]=205;city_to_city_distances_matrix[9][28]=140;city_to_city_distances_matrix[9][29]=195;city_to_city_distances_matrix[9][30]=105;city_to_city_distances_matrix[9][31]=85;city_to_city_distances_matrix[9][32]=240;city_to_city_distances_matrix[9][33]=270;city_to_city_distances_matrix[9][34]=290;city_to_city_distances_matrix[9][35]=180;city_to_city_distances_matrix[9][36]=200;city_to_city_distances_matrix[9][37]=210;city_to_city_distances_matrix[9][38]=190;city_to_city_distances_matrix[9][39]=170;city_to_city_distances_matrix[9][40]=180;city_to_city_distances_matrix[9][41]=190;city_to_city_distances_matrix[9][42]=150;city_to_city_distances_matrix[9][43]=210;city_to_city_distances_matrix[9][44]=170;city_to_city_distances_matrix[9][45]=230;city_to_city_distances_matrix[9][46]=190;city_to_city_distances_matrix[9][47]=250;city_to_city_distances_matrix[9][48]=290;city_to_city_distances_matrix[9][49]=250;city_to_city_distances_matrix[9][50]=240;city_to_city_distances_matrix[9][51]=330;city_to_city_distances_matrix[9][52]=250;city_to_city_distances_matrix[9][53]=240;city_to_city_distances_matrix[9][54]=300;city_to_city_distances_matrix[9][55]=280;city_to_city_distances_matrix[9][56]=270;city_to_city_distances_matrix[9][57]=280;city_to_city_distances_matrix[9][58]=350;city_to_city_distances_matrix[9][59]=370;city_to_city_distances_matrix[9][60]=140;city_to_city_distances_matrix[9][61]=110;city_to_city_distances_matrix[9][62]=130;city_to_city_distances_matrix[9][63]=100;
city_to_city_distances_matrix[10][0]=220;city_to_city_distances_matrix[10][1]=230;city_to_city_distances_matrix[10][2]=225;city_to_city_distances_matrix[10][3]=180;city_to_city_distances_matrix[10][4]=170;city_to_city_distances_matrix[10][5]=235;city_to_city_distances_matrix[10][6]=190;city_to_city_distances_matrix[10][7]=180;city_to_city_distances_matrix[10][8]=120;city_to_city_distances_matrix[10][9]=100;city_to_city_distances_matrix[10][10]=0;city_to_city_distances_matrix[10][11]=60;city_to_city_distances_matrix[10][12]=70;city_to_city_distances_matrix[10][13]=380;city_to_city_distances_matrix[10][14]=500;city_to_city_distances_matrix[10][15]=200;city_to_city_distances_matrix[10][16]=190;city_to_city_distances_matrix[10][17]=240;city_to_city_distances_matrix[10][18]=270;city_to_city_distances_matrix[10][19]=260;city_to_city_distances_matrix[10][20]=210;city_to_city_distances_matrix[10][21]=440;city_to_city_distances_matrix[10][22]=460;city_to_city_distances_matrix[10][23]=470;city_to_city_distances_matrix[10][24]=260;city_to_city_distances_matrix[10][25]=285;city_to_city_distances_matrix[10][26]=235;city_to_city_distances_matrix[10][27]=275;city_to_city_distances_matrix[10][28]=210;city_to_city_distances_matrix[10][29]=265;city_to_city_distances_matrix[10][30]=175;city_to_city_distances_matrix[10][31]=155;city_to_city_distances_matrix[10][32]=310;city_to_city_distances_matrix[10][33]=340;city_to_city_distances_matrix[10][34]=360;city_to_city_distances_matrix[10][35]=250;city_to_city_distances_matrix[10][36]=270;city_to_city_distances_matrix[10][37]=280;city_to_city_distances_matrix[10][38]=260;city_to_city_distances_matrix[10][39]=240;city_to_city_distances_matrix[10][40]=250;city_to_city_distances_matrix[10][41]=260;city_to_city_distances_matrix[10][42]=220;city_to_city_distances_matrix[10][43]=280;city_to_city_distances_matrix[10][44]=240;city_to_city_distances_matrix[10][45]=300;city_to_city_distances_matrix[10][46]=260;city_to_city_distances_matrix[10][47]=320;city_to_city_distances_matrix[10][48]=340;city_to_city_distances_matrix[10][49]=300;city_to_city_distances_matrix[10][50]=290;city_to_city_distances_matrix[10][51]=380;city_to_city_distances_matrix[10][52]=310;city_to_city_distances_matrix[10][53]=300;city_to_city_distances_matrix[10][54]=360;city_to_city_distances_matrix[10][55]=340;city_to_city_distances_matrix[10][56]=330;city_to_city_distances_matrix[10][57]=340;city_to_city_distances_matrix[10][58]=410;city_to_city_distances_matrix[10][59]=430;city_to_city_distances_matrix[10][60]=220;city_to_city_distances_matrix[10][61]=250;city_to_city_distances_matrix[10][62]=270;city_to_city_distances_matrix[10][63]=210;
city_to_city_distances_matrix[11][0]=200;city_to_city_distances_matrix[11][1]=210;city_to_city_distances_matrix[11][2]=205;city_to_city_distances_matrix[11][3]=160;city_to_city_distances_matrix[11][4]=140;city_to_city_distances_matrix[11][5]=215;city_to_city_distances_matrix[11][6]=170;city_to_city_distances_matrix[11][7]=160;city_to_city_distances_matrix[11][8]=100;city_to_city_distances_matrix[11][9]=80;city_to_city_distances_matrix[11][10]=60;city_to_city_distances_matrix[11][11]=0;city_to_city_distances_matrix[11][12]=40;city_to_city_distances_matrix[11][13]=360;city_to_city_distances_matrix[11][14]=480;city_to_city_distances_matrix[11][15]=180;city_to_city_distances_matrix[11][16]=170;city_to_city_distances_matrix[11][17]=220;city_to_city_distances_matrix[11][18]=250;city_to_city_distances_matrix[11][19]=240;city_to_city_distances_matrix[11][20]=190;city_to_city_distances_matrix[11][21]=420;city_to_city_distances_matrix[11][22]=440;city_to_city_distances_matrix[11][23]=450;city_to_city_distances_matrix[11][24]=240;city_to_city_distances_matrix[11][25]=265;city_to_city_distances_matrix[11][26]=215;city_to_city_distances_matrix[11][27]=255;city_to_city_distances_matrix[11][28]=190;city_to_city_distances_matrix[11][29]=245;city_to_city_distances_matrix[11][30]=155;city_to_city_distances_matrix[11][31]=135;city_to_city_distances_matrix[11][32]=300;city_to_city_distances_matrix[11][33]=330;city_to_city_distances_matrix[11][34]=350;city_to_city_distances_matrix[11][35]=240;city_to_city_distances_matrix[11][36]=260;city_to_city_distances_matrix[11][37]=270;city_to_city_distances_matrix[11][38]=250;city_to_city_distances_matrix[11][39]=230;city_to_city_distances_matrix[11][40]=240;city_to_city_distances_matrix[11][41]=250;city_to_city_distances_matrix[11][42]=200;city_to_city_distances_matrix[11][43]=260;city_to_city_distances_matrix[11][44]=220;city_to_city_distances_matrix[11][45]=280;city_to_city_distances_matrix[11][46]=240;city_to_city_distances_matrix[11][47]=300;city_to_city_distances_matrix[11][48]=320;city_to_city_distances_matrix[11][49]=280;city_to_city_distances_matrix[11][50]=270;city_to_city_distances_matrix[11][51]=360;city_to_city_distances_matrix[11][52]=290;city_to_city_distances_matrix[11][53]=280;city_to_city_distances_matrix[11][54]=340;city_to_city_distances_matrix[11][55]=320;city_to_city_distances_matrix[11][56]=310;city_to_city_distances_matrix[11][57]=320;city_to_city_distances_matrix[11][58]=390;city_to_city_distances_matrix[11][59]=410;city_to_city_distances_matrix[11][60]=200;city_to_city_distances_matrix[11][61]=230;city_to_city_distances_matrix[11][62]=250;city_to_city_distances_matrix[11][63]=190;
city_to_city_distances_matrix[12][0]=190;city_to_city_distances_matrix[12][1]=200;city_to_city_distances_matrix[12][2]=195;city_to_city_distances_matrix[12][3]=150;city_to_city_distances_matrix[12][4]=130;city_to_city_distances_matrix[12][5]=205;city_to_city_distances_matrix[12][6]=160;city_to_city_distances_matrix[12][7]=150;city_to_city_distances_matrix[12][8]=90;city_to_city_distances_matrix[12][9]=70;city_to_city_distances_matrix[12][10]=70;city_to_city_distances_matrix[12][11]=40;city_to_city_distances_matrix[12][12]=0;city_to_city_distances_matrix[12][13]=350;city_to_city_distances_matrix[12][14]=470;city_to_city_distances_matrix[12][15]=170;city_to_city_distances_matrix[12][16]=160;city_to_city_distances_matrix[12][17]=210;city_to_city_distances_matrix[12][18]=240;city_to_city_distances_matrix[12][19]=230;city_to_city_distances_matrix[12][20]=180;city_to_city_distances_matrix[12][21]=410;city_to_city_distances_matrix[12][22]=430;city_to_city_distances_matrix[12][23]=440;city_to_city_distances_matrix[12][24]=230;city_to_city_distances_matrix[12][25]=255;city_to_city_distances_matrix[12][26]=205;city_to_city_distances_matrix[12][27]=245;city_to_city_distances_matrix[12][28]=180;city_to_city_distances_matrix[12][29]=235;city_to_city_distances_matrix[12][30]=145;city_to_city_distances_matrix[12][31]=125;city_to_city_distances_matrix[12][32]=290;city_to_city_distances_matrix[12][33]=320;city_to_city_distances_matrix[12][34]=340;city_to_city_distances_matrix[12][35]=230;city_to_city_distances_matrix[12][36]=250;city_to_city_distances_matrix[12][37]=260;city_to_city_distances_matrix[12][38]=240;city_to_city_distances_matrix[12][39]=220;city_to_city_distances_matrix[12][40]=230;city_to_city_distances_matrix[12][41]=240;city_to_city_distances_matrix[12][42]=190;city_to_city_distances_matrix[12][43]=250;city_to_city_distances_matrix[12][44]=210;city_to_city_distances_matrix[12][45]=270;city_to_city_distances_matrix[12][46]=230;city_to_city_distances_matrix[12][47]=290;city_to_city_distances_matrix[12][48]=310;city_to_city_distances_matrix[12][49]=270;city_to_city_distances_matrix[12][50]=260;city_to_city_distances_matrix[12][51]=350;city_to_city_distances_matrix[12][52]=280;city_to_city_distances_matrix[12][53]=270;city_to_city_distances_matrix[12][54]=330;city_to_city_distances_matrix[12][55]=310;city_to_city_distances_matrix[12][56]=300;city_to_city_distances_matrix[12][57]=310;city_to_city_distances_matrix[12][58]=380;city_to_city_distances_matrix[12][59]=400;city_to_city_distances_matrix[12][60]=190;city_to_city_distances_matrix[12][61]=220;city_to_city_distances_matrix[12][62]=240;city_to_city_distances_matrix[12][63]=180;
city_to_city_distances_matrix[13][0]=265;city_to_city_distances_matrix[13][1]=280;city_to_city_distances_matrix[13][2]=255;city_to_city_distances_matrix[13][3]=300;city_to_city_distances_matrix[13][4]=270;city_to_city_distances_matrix[13][5]=260;city_to_city_distances_matrix[13][6]=310;city_to_city_distances_matrix[13][7]=320;city_to_city_distances_matrix[13][8]=320;city_to_city_distances_matrix[13][9]=310;city_to_city_distances_matrix[13][10]=380;city_to_city_distances_matrix[13][11]=360;city_to_city_distances_matrix[13][12]=350;city_to_city_distances_matrix[13][13]=0;city_to_city_distances_matrix[13][14]=390;city_to_city_distances_matrix[13][15]=100;city_to_city_distances_matrix[13][16]=95;city_to_city_distances_matrix[13][17]=150;city_to_city_distances_matrix[13][18]=180;city_to_city_distances_matrix[13][19]=170;city_to_city_distances_matrix[13][20]=110;city_to_city_distances_matrix[13][21]=300;city_to_city_distances_matrix[13][22]=320;city_to_city_distances_matrix[13][23]=330;city_to_city_distances_matrix[13][24]=265;city_to_city_distances_matrix[13][25]=290;city_to_city_distances_matrix[13][26]=240;city_to_city_distances_matrix[13][27]=280;city_to_city_distances_matrix[13][28]=215;city_to_city_distances_matrix[13][29]=270;city_to_city_distances_matrix[13][30]=180;city_to_city_distances_matrix[13][31]=160;city_to_city_distances_matrix[13][32]=290;city_to_city_distances_matrix[13][33]=320;city_to_city_distances_matrix[13][34]=340;city_to_city_distances_matrix[13][35]=230;city_to_city_distances_matrix[13][36]=250;city_to_city_distances_matrix[13][37]=260;city_to_city_distances_matrix[13][38]=240;city_to_city_distances_matrix[13][39]=220;city_to_city_distances_matrix[13][40]=230;city_to_city_distances_matrix[13][41]=240;city_to_city_distances_matrix[13][42]=265;city_to_city_distances_matrix[13][43]=325;city_to_city_distances_matrix[13][44]=285;city_to_city_distances_matrix[13][45]=345;city_to_city_distances_matrix[13][46]=305;city_to_city_distances_matrix[13][47]=365;city_to_city_distances_matrix[13][48]=240;city_to_city_distances_matrix[13][49]=200;city_to_city_distances_matrix[13][50]=190;city_to_city_distances_matrix[13][51]=280;city_to_city_distances_matrix[13][52]=310;city_to_city_distances_matrix[13][53]=300;city_to_city_distances_matrix[13][54]=360;city_to_city_distances_matrix[13][55]=340;city_to_city_distances_matrix[13][56]=330;city_to_city_distances_matrix[13][57]=340;city_to_city_distances_matrix[13][58]=410;city_to_city_distances_matrix[13][59]=430;city_to_city_distances_matrix[13][60]=260;city_to_city_distances_matrix[13][61]=290;city_to_city_distances_matrix[13][62]=310;city_to_city_distances_matrix[13][63]=250;
city_to_city_distances_matrix[14][0]=390;city_to_city_distances_matrix[14][1]=400;city_to_city_distances_matrix[14][2]=380;city_to_city_distances_matrix[14][3]=420;city_to_city_distances_matrix[14][4]=395;city_to_city_distances_matrix[14][5]=385;city_to_city_distances_matrix[14][6]=435;city_to_city_distances_matrix[14][7]=445;city_to_city_distances_matrix[14][8]=440;city_to_city_distances_matrix[14][9]=430;city_to_city_distances_matrix[14][10]=500;city_to_city_distances_matrix[14][11]=480;city_to_city_distances_matrix[14][12]=470;city_to_city_distances_matrix[14][13]=390;city_to_city_distances_matrix[14][14]=0;city_to_city_distances_matrix[14][15]=310;city_to_city_distances_matrix[14][16]=300;city_to_city_distances_matrix[14][17]=250;city_to_city_distances_matrix[14][18]=280;city_to_city_distances_matrix[14][19]=290;city_to_city_distances_matrix[14][20]=320;city_to_city_distances_matrix[14][21]=420;city_to_city_distances_matrix[14][22]=440;city_to_city_distances_matrix[14][23]=450;city_to_city_distances_matrix[14][24]=390;city_to_city_distances_matrix[14][25]=420;city_to_city_distances_matrix[14][26]=370;city_to_city_distances_matrix[14][27]=410;city_to_city_distances_matrix[14][28]=345;city_to_city_distances_matrix[14][29]=400;city_to_city_distances_matrix[14][30]=360;city_to_city_distances_matrix[14][31]=340;city_to_city_distances_matrix[14][32]=450;city_to_city_distances_matrix[14][33]=480;city_to_city_distances_matrix[14][34]=500;city_to_city_distances_matrix[14][35]=390;city_to_city_distances_matrix[14][36]=410;city_to_city_distances_matrix[14][37]=420;city_to_city_distances_matrix[14][38]=400;city_to_city_distances_matrix[14][39]=380;city_to_city_distances_matrix[14][40]=390;city_to_city_distances_matrix[14][41]=400;city_to_city_distances_matrix[14][42]=390;city_to_city_distances_matrix[14][43]=450;city_to_city_distances_matrix[14][44]=410;city_to_city_distances_matrix[14][45]=470;city_to_city_distances_matrix[14][46]=430;city_to_city_distances_matrix[14][47]=490;city_to_city_distances_matrix[14][48]=310;city_to_city_distances_matrix[14][49]=270;city_to_city_distances_matrix[14][50]=260;city_to_city_distances_matrix[14][51]=350;city_to_city_distances_matrix[14][52]=420;city_to_city_distances_matrix[14][53]=410;city_to_city_distances_matrix[14][54]=470;city_to_city_distances_matrix[14][55]=450;city_to_city_distances_matrix[14][56]=440;city_to_city_distances_matrix[14][57]=450;city_to_city_distances_matrix[14][58]=520;city_to_city_distances_matrix[14][59]=540;city_to_city_distances_matrix[14][60]=390;city_to_city_distances_matrix[14][61]=420;city_to_city_distances_matrix[14][62]=440;city_to_city_distances_matrix[14][63]=380;
city_to_city_distances_matrix[15][0]=100;city_to_city_distances_matrix[15][1]=115;city_to_city_distances_matrix[15][2]=90;city_to_city_distances_matrix[15][3]=130;city_to_city_distances_matrix[15][4]=105;city_to_city_distances_matrix[15][5]=95;city_to_city_distances_matrix[15][6]=140;city_to_city_distances_matrix[15][7]=150;city_to_city_distances_matrix[15][8]=140;city_to_city_distances_matrix[15][9]=130;city_to_city_distances_matrix[15][10]=200;city_to_city_distances_matrix[15][11]=180;city_to_city_distances_matrix[15][12]=170;city_to_city_distances_matrix[15][13]=100;city_to_city_distances_matrix[15][14]=310;city_to_city_distances_matrix[15][15]=0;city_to_city_distances_matrix[15][16]=40;city_to_city_distances_matrix[15][17]=70;city_to_city_distances_matrix[15][18]=100;city_to_city_distances_matrix[15][19]=90;city_to_city_distances_matrix[15][20]=50;city_to_city_distances_matrix[15][21]=260;city_to_city_distances_matrix[15][22]=280;city_to_city_distances_matrix[15][23]=290;city_to_city_distances_matrix[15][24]=160;city_to_city_distances_matrix[15][25]=185;city_to_city_distances_matrix[15][26]=135;city_to_city_distances_matrix[15][27]=175;city_to_city_distances_matrix[15][28]=110;city_to_city_distances_matrix[15][29]=165;city_to_city_distances_matrix[15][30]=75;city_to_city_distances_matrix[15][31]=55;city_to_city_distances_matrix[15][32]=200;city_to_city_distances_matrix[15][33]=230;city_to_city_distances_matrix[15][34]=250;city_to_city_distances_matrix[15][35]=140;city_to_city_distances_matrix[15][36]=160;city_to_city_distances_matrix[15][37]=170;city_to_city_distances_matrix[15][38]=150;city_to_city_distances_matrix[15][39]=130;city_to_city_distances_matrix[15][40]=140;city_to_city_distances_matrix[15][41]=150;city_to_city_distances_matrix[15][42]=100;city_to_city_distances_matrix[15][43]=160;city_to_city_distances_matrix[15][44]=120;city_to_city_distances_matrix[15][45]=180;city_to_city_distances_matrix[15][46]=140;city_to_city_distances_matrix[15][47]=200;city_to_city_distances_matrix[15][48]=180;city_to_city_distances_matrix[15][49]=140;city_to_city_distances_matrix[15][50]=130;city_to_city_distances_matrix[15][51]=220;city_to_city_distances_matrix[15][52]=270;city_to_city_distances_matrix[15][53]=260;city_to_city_distances_matrix[15][54]=320;city_to_city_distances_matrix[15][55]=300;city_to_city_distances_matrix[15][56]=290;city_to_city_distances_matrix[15][57]=300;city_to_city_distances_matrix[15][58]=370;city_to_city_distances_matrix[15][59]=390;city_to_city_distances_matrix[15][60]=90;city_to_city_distances_matrix[15][61]=120;city_to_city_distances_matrix[15][62]=140;city_to_city_distances_matrix[15][63]=100;
city_to_city_distances_matrix[16][0]=95;city_to_city_distances_matrix[16][1]=105;city_to_city_distances_matrix[16][2]=80;city_to_city_distances_matrix[16][3]=120;city_to_city_distances_matrix[16][4]=85;city_to_city_distances_matrix[16][5]=85;city_to_city_distances_matrix[16][6]=130;city_to_city_distances_matrix[16][7]=140;city_to_city_distances_matrix[16][8]=135;city_to_city_distances_matrix[16][9]=125;city_to_city_distances_matrix[16][10]=190;city_to_city_distances_matrix[16][11]=170;city_to_city_distances_matrix[16][12]=160;city_to_city_distances_matrix[16][13]=95;city_to_city_distances_matrix[16][14]=300;city_to_city_distances_matrix[16][15]=40;city_to_city_distances_matrix[16][16]=0;city_to_city_distances_matrix[16][17]=60;city_to_city_distances_matrix[16][18]=90;city_to_city_distances_matrix[16][19]=80;city_to_city_distances_matrix[16][20]=45;city_to_city_distances_matrix[16][21]=250;city_to_city_distances_matrix[16][22]=270;city_to_city_distances_matrix[16][23]=280;city_to_city_distances_matrix[16][24]=155;city_to_city_distances_matrix[16][25]=180;city_to_city_distances_matrix[16][26]=130;city_to_city_distances_matrix[16][27]=170;city_to_city_distances_matrix[16][28]=105;city_to_city_distances_matrix[16][29]=160;city_to_city_distances_matrix[16][30]=70;city_to_city_distances_matrix[16][31]=50;city_to_city_distances_matrix[16][32]=195;city_to_city_distances_matrix[16][33]=225;city_to_city_distances_matrix[16][34]=245;city_to_city_distances_matrix[16][35]=135;city_to_city_distances_matrix[16][36]=155;city_to_city_distances_matrix[16][37]=165;city_to_city_distances_matrix[16][38]=145;city_to_city_distances_matrix[16][39]=125;city_to_city_distances_matrix[16][40]=135;city_to_city_distances_matrix[16][41]=145;city_to_city_distances_matrix[16][42]=95;city_to_city_distances_matrix[16][43]=155;city_to_city_distances_matrix[16][44]=115;city_to_city_distances_matrix[16][45]=175;city_to_city_distances_matrix[16][46]=135;city_to_city_distances_matrix[16][47]=195;city_to_city_distances_matrix[16][48]=175;city_to_city_distances_matrix[16][49]=135;city_to_city_distances_matrix[16][50]=125;city_to_city_distances_matrix[16][51]=215;city_to_city_distances_matrix[16][52]=265;city_to_city_distances_matrix[16][53]=255;city_to_city_distances_matrix[16][54]=315;city_to_city_distances_matrix[16][55]=295;city_to_city_distances_matrix[16][56]=285;city_to_city_distances_matrix[16][57]=295;city_to_city_distances_matrix[16][58]=365;city_to_city_distances_matrix[16][59]=385;city_to_city_distances_matrix[16][60]=85;city_to_city_distances_matrix[16][61]=115;city_to_city_distances_matrix[16][62]=135;city_to_city_distances_matrix[16][63]=95;
city_to_city_distances_matrix[17][0]=150;city_to_city_distances_matrix[17][1]=160;city_to_city_distances_matrix[17][2]=140;city_to_city_distances_matrix[17][3]=180;city_to_city_distances_matrix[17][4]=150;city_to_city_distances_matrix[17][5]=140;city_to_city_distances_matrix[17][6]=180;city_to_city_distances_matrix[17][7]=190;city_to_city_distances_matrix[17][8]=180;city_to_city_distances_matrix[17][9]=170;city_to_city_distances_matrix[17][10]=240;city_to_city_distances_matrix[17][11]=220;city_to_city_distances_matrix[17][12]=210;city_to_city_distances_matrix[17][13]=150;city_to_city_distances_matrix[17][14]=250;city_to_city_distances_matrix[17][15]=70;city_to_city_distances_matrix[17][16]=60;city_to_city_distances_matrix[17][17]=0;city_to_city_distances_matrix[17][18]=60;city_to_city_distances_matrix[17][19]=50;city_to_city_distances_matrix[17][20]=90;city_to_city_distances_matrix[17][21]=200;city_to_city_distances_matrix[17][22]=220;city_to_city_distances_matrix[17][23]=230;city_to_city_distances_matrix[17][24]=200;city_to_city_distances_matrix[17][25]=225;city_to_city_distances_matrix[17][26]=175;city_to_city_distances_matrix[17][27]=215;city_to_city_distances_matrix[17][28]=150;city_to_city_distances_matrix[17][29]=205;city_to_city_distances_matrix[17][30]=115;city_to_city_distances_matrix[17][31]=95;city_to_city_distances_matrix[17][32]=230;city_to_city_distances_matrix[17][33]=260;city_to_city_distances_matrix[17][34]=280;city_to_city_distances_matrix[17][35]=170;city_to_city_distances_matrix[17][36]=190;city_to_city_distances_matrix[17][37]=200;city_to_city_distances_matrix[17][38]=180;city_to_city_distances_matrix[17][39]=160;city_to_city_distances_matrix[17][40]=170;city_to_city_distances_matrix[17][41]=180;city_to_city_distances_matrix[17][42]=150;city_to_city_distances_matrix[17][43]=210;city_to_city_distances_matrix[17][44]=170;city_to_city_distances_matrix[17][45]=230;city_to_city_distances_matrix[17][46]=190;city_to_city_distances_matrix[17][47]=250;city_to_city_distances_matrix[17][48]=220;city_to_city_distances_matrix[17][49]=180;city_to_city_distances_matrix[17][50]=170;city_to_city_distances_matrix[17][51]=260;city_to_city_distances_matrix[17][52]=240;city_to_city_distances_matrix[17][53]=230;city_to_city_distances_matrix[17][54]=290;city_to_city_distances_matrix[17][55]=270;city_to_city_distances_matrix[17][56]=260;city_to_city_distances_matrix[17][57]=270;city_to_city_distances_matrix[17][58]=340;city_to_city_distances_matrix[17][59]=360;city_to_city_distances_matrix[17][60]=140;city_to_city_distances_matrix[17][61]=170;city_to_city_distances_matrix[17][62]=190;city_to_city_distances_matrix[17][63]=150;
city_to_city_distances_matrix[18][0]=180;city_to_city_distances_matrix[18][1]=190;city_to_city_distances_matrix[18][2]=170;city_to_city_distances_matrix[18][3]=210;city_to_city_distances_matrix[18][4]=180;city_to_city_distances_matrix[18][5]=170;city_to_city_distances_matrix[18][6]=210;city_to_city_distances_matrix[18][7]=220;city_to_city_distances_matrix[18][8]=210;city_to_city_distances_matrix[18][9]=200;city_to_city_distances_matrix[18][10]=270;city_to_city_distances_matrix[18][11]=250;city_to_city_distances_matrix[18][12]=240;city_to_city_distances_matrix[18][13]=180;city_to_city_distances_matrix[18][14]=280;city_to_city_distances_matrix[18][15]=100;city_to_city_distances_matrix[18][16]=90;city_to_city_distances_matrix[18][17]=60;city_to_city_distances_matrix[18][18]=0;city_to_city_distances_matrix[18][19]=40;city_to_city_distances_matrix[18][20]=110;city_to_city_distances_matrix[18][21]=230;city_to_city_distances_matrix[18][22]=250;city_to_city_distances_matrix[18][23]=260;city_to_city_distances_matrix[18][24]=230;city_to_city_distances_matrix[18][25]=255;city_to_city_distances_matrix[18][26]=205;city_to_city_distances_matrix[18][27]=245;city_to_city_distances_matrix[18][28]=180;city_to_city_distances_matrix[18][29]=235;city_to_city_distances_matrix[18][30]=145;city_to_city_distances_matrix[18][31]=125;city_to_city_distances_matrix[18][32]=260;city_to_city_distances_matrix[18][33]=290;city_to_city_distances_matrix[18][34]=310;city_to_city_distances_matrix[18][35]=200;city_to_city_distances_matrix[18][36]=220;city_to_city_distances_matrix[18][37]=230;city_to_city_distances_matrix[18][38]=210;city_to_city_distances_matrix[18][39]=190;city_to_city_distances_matrix[18][40]=200;city_to_city_distances_matrix[18][41]=210;city_to_city_distances_matrix[18][42]=180;city_to_city_distances_matrix[18][43]=240;city_to_city_distances_matrix[18][44]=200;city_to_city_distances_matrix[18][45]=260;city_to_city_distances_matrix[18][46]=220;city_to_city_distances_matrix[18][47]=280;city_to_city_distances_matrix[18][48]=250;city_to_city_distances_matrix[18][49]=210;city_to_city_distances_matrix[18][50]=200;city_to_city_distances_matrix[18][51]=290;city_to_city_distances_matrix[18][52]=270;city_to_city_distances_matrix[18][53]=260;city_to_city_distances_matrix[18][54]=320;city_to_city_distances_matrix[18][55]=300;city_to_city_distances_matrix[18][56]=290;city_to_city_distances_matrix[18][57]=300;city_to_city_distances_matrix[18][58]=370;city_to_city_distances_matrix[18][59]=390;city_to_city_distances_matrix[18][60]=170;city_to_city_distances_matrix[18][61]=200;city_to_city_distances_matrix[18][62]=220;city_to_city_distances_matrix[18][63]=180;
city_to_city_distances_matrix[19][0]=170;city_to_city_distances_matrix[19][1]=180;city_to_city_distances_matrix[19][2]=160;city_to_city_distances_matrix[19][3]=200;city_to_city_distances_matrix[19][4]=170;city_to_city_distances_matrix[19][5]=160;city_to_city_distances_matrix[19][6]=200;city_to_city_distances_matrix[19][7]=210;city_to_city_distances_matrix[19][8]=200;city_to_city_distances_matrix[19][9]=190;city_to_city_distances_matrix[19][10]=260;city_to_city_distances_matrix[19][11]=240;city_to_city_distances_matrix[19][12]=230;city_to_city_distances_matrix[19][13]=170;city_to_city_distances_matrix[19][14]=290;city_to_city_distances_matrix[19][15]=90;city_to_city_distances_matrix[19][16]=80;city_to_city_distances_matrix[19][17]=50;city_to_city_distances_matrix[19][18]=40;city_to_city_distances_matrix[19][19]=0;city_to_city_distances_matrix[19][20]=100;city_to_city_distances_matrix[19][21]=220;city_to_city_distances_matrix[19][22]=240;city_to_city_distances_matrix[19][23]=250;city_to_city_distances_matrix[19][24]=220;city_to_city_distances_matrix[19][25]=245;city_to_city_distances_matrix[19][26]=195;city_to_city_distances_matrix[19][27]=235;city_to_city_distances_matrix[19][28]=170;city_to_city_distances_matrix[19][29]=225;city_to_city_distances_matrix[19][30]=135;city_to_city_distances_matrix[19][31]=115;city_to_city_distances_matrix[19][32]=250;city_to_city_distances_matrix[19][33]=280;city_to_city_distances_matrix[19][34]=300;city_to_city_distances_matrix[19][35]=190;city_to_city_distances_matrix[19][36]=210;city_to_city_distances_matrix[19][37]=220;city_to_city_distances_matrix[19][38]=200;city_to_city_distances_matrix[19][39]=180;city_to_city_distances_matrix[19][40]=190;city_to_city_distances_matrix[19][41]=200;city_to_city_distances_matrix[19][42]=170;city_to_city_distances_matrix[19][43]=230;city_to_city_distances_matrix[19][44]=190;city_to_city_distances_matrix[19][45]=250;city_to_city_distances_matrix[19][46]=210;city_to_city_distances_matrix[19][47]=270;city_to_city_distances_matrix[19][48]=240;city_to_city_distances_matrix[19][49]=200;city_to_city_distances_matrix[19][50]=190;city_to_city_distances_matrix[19][51]=280;city_to_city_distances_matrix[19][52]=260;city_to_city_distances_matrix[19][53]=250;city_to_city_distances_matrix[19][54]=310;city_to_city_distances_matrix[19][55]=290;city_to_city_distances_matrix[19][56]=280;city_to_city_distances_matrix[19][57]=290;city_to_city_distances_matrix[19][58]=360;city_to_city_distances_matrix[19][59]=380;city_to_city_distances_matrix[19][60]=160;city_to_city_distances_matrix[19][61]=190;city_to_city_distances_matrix[19][62]=210;city_to_city_distances_matrix[19][63]=170;
city_to_city_distances_matrix[20][0]=110;city_to_city_distances_matrix[20][1]=120;city_to_city_distances_matrix[20][2]=100;city_to_city_distances_matrix[20][3]=140;city_to_city_distances_matrix[20][4]=115;city_to_city_distances_matrix[20][5]=105;city_to_city_distances_matrix[20][6]=150;city_to_city_distances_matrix[20][7]=160;city_to_city_distances_matrix[20][8]=160;city_to_city_distances_matrix[20][9]=150;city_to_city_distances_matrix[20][10]=210;city_to_city_distances_matrix[20][11]=190;city_to_city_distances_matrix[20][12]=180;city_to_city_distances_matrix[20][13]=110;city_to_city_distances_matrix[20][14]=320;city_to_city_distances_matrix[20][15]=50;city_to_city_distances_matrix[20][16]=45;city_to_city_distances_matrix[20][17]=90;city_to_city_distances_matrix[20][18]=110;city_to_city_distances_matrix[20][19]=100;city_to_city_distances_matrix[20][20]=0;city_to_city_distances_matrix[20][21]=210;city_to_city_distances_matrix[20][22]=230;city_to_city_distances_matrix[20][23]=240;city_to_city_distances_matrix[20][24]=180;city_to_city_distances_matrix[20][25]=205;city_to_city_distances_matrix[20][26]=155;city_to_city_distances_matrix[20][27]=195;city_to_city_distances_matrix[20][28]=130;city_to_city_distances_matrix[20][29]=185;city_to_city_distances_matrix[20][30]=95;city_to_city_distances_matrix[20][31]=75;city_to_city_distances_matrix[20][32]=210;city_to_city_distances_matrix[20][33]=240;city_to_city_distances_matrix[20][34]=260;city_to_city_distances_matrix[20][35]=150;city_to_city_distances_matrix[20][36]=170;city_to_city_distances_matrix[20][37]=180;city_to_city_distances_matrix[20][38]=160;city_to_city_distances_matrix[20][39]=140;city_to_city_distances_matrix[20][40]=150;city_to_city_distances_matrix[20][41]=160;city_to_city_distances_matrix[20][42]=110;city_to_city_distances_matrix[20][43]=170;city_to_city_distances_matrix[20][44]=130;city_to_city_distances_matrix[20][45]=190;city_to_city_distances_matrix[20][46]=150;city_to_city_distances_matrix[20][47]=210;city_to_city_distances_matrix[20][48]=190;city_to_city_distances_matrix[20][49]=150;city_to_city_distances_matrix[20][50]=140;city_to_city_distances_matrix[20][51]=230;city_to_city_distances_matrix[20][52]=220;city_to_city_distances_matrix[20][53]=210;city_to_city_distances_matrix[20][54]=270;city_to_city_distances_matrix[20][55]=250;city_to_city_distances_matrix[20][56]=240;city_to_city_distances_matrix[20][57]=250;city_to_city_distances_matrix[20][58]=320;city_to_city_distances_matrix[20][59]=340;city_to_city_distances_matrix[20][60]=110;city_to_city_distances_matrix[20][61]=140;city_to_city_distances_matrix[20][62]=160;city_to_city_distances_matrix[20][63]=120;
city_to_city_distances_matrix[21][0]=320;city_to_city_distances_matrix[21][1]=330;city_to_city_distances_matrix[21][2]=310;city_to_city_distances_matrix[21][3]=350;city_to_city_distances_matrix[21][4]=325;city_to_city_distances_matrix[21][5]=315;city_to_city_distances_matrix[21][6]=360;city_to_city_distances_matrix[21][7]=370;city_to_city_distances_matrix[21][8]=380;city_to_city_distances_matrix[21][9]=370;city_to_city_distances_matrix[21][10]=440;city_to_city_distances_matrix[21][11]=420;city_to_city_distances_matrix[21][12]=410;city_to_city_distances_matrix[21][13]=300;city_to_city_distances_matrix[21][14]=420;city_to_city_distances_matrix[21][15]=260;city_to_city_distances_matrix[21][16]=250;city_to_city_distances_matrix[21][17]=200;city_to_city_distances_matrix[21][18]=230;city_to_city_distances_matrix[21][19]=220;city_to_city_distances_matrix[21][20]=210;city_to_city_distances_matrix[21][21]=0;city_to_city_distances_matrix[21][22]=60;city_to_city_distances_matrix[21][23]=70;city_to_city_distances_matrix[21][24]=90;city_to_city_distances_matrix[21][25]=120;city_to_city_distances_matrix[21][26]=150;city_to_city_distances_matrix[21][27]=180;city_to_city_distances_matrix[21][28]=210;city_to_city_distances_matrix[21][29]=200;city_to_city_distances_matrix[21][30]=230;city_to_city_distances_matrix[21][31]=240;city_to_city_distances_matrix[21][32]=340;city_to_city_distances_matrix[21][33]=370;city_to_city_distances_matrix[21][34]=390;city_to_city_distances_matrix[21][35]=280;city_to_city_distances_matrix[21][36]=300;city_to_city_distances_matrix[21][37]=310;city_to_city_distances_matrix[21][38]=290;city_to_city_distances_matrix[21][39]=270;city_to_city_distances_matrix[21][40]=280;city_to_city_distances_matrix[21][41]=290;city_to_city_distances_matrix[21][42]=320;city_to_city_distances_matrix[21][43]=380;city_to_city_distances_matrix[21][44]=340;city_to_city_distances_matrix[21][45]=400;city_to_city_distances_matrix[21][46]=360;city_to_city_distances_matrix[21][47]=420;city_to_city_distances_matrix[21][48]=350;city_to_city_distances_matrix[21][49]=310;city_to_city_distances_matrix[21][50]=300;city_to_city_distances_matrix[21][51]=390;city_to_city_distances_matrix[21][52]=420;city_to_city_distances_matrix[21][53]=410;city_to_city_distances_matrix[21][54]=470;city_to_city_distances_matrix[21][55]=450;city_to_city_distances_matrix[21][56]=440;city_to_city_distances_matrix[21][57]=450;city_to_city_distances_matrix[21][58]=520;city_to_city_distances_matrix[21][59]=540;city_to_city_distances_matrix[21][60]=310;city_to_city_distances_matrix[21][61]=340;city_to_city_distances_matrix[21][62]=360;city_to_city_distances_matrix[21][63]=300;
city_to_city_distances_matrix[22][0]=340;city_to_city_distances_matrix[22][1]=350;city_to_city_distances_matrix[22][2]=330;city_to_city_distances_matrix[22][3]=370;city_to_city_distances_matrix[22][4]=345;city_to_city_distances_matrix[22][5]=335;city_to_city_distances_matrix[22][6]=380;city_to_city_distances_matrix[22][7]=390;city_to_city_distances_matrix[22][8]=400;city_to_city_distances_matrix[22][9]=390;city_to_city_distances_matrix[22][10]=460;city_to_city_distances_matrix[22][11]=440;city_to_city_distances_matrix[22][12]=430;city_to_city_distances_matrix[22][13]=320;city_to_city_distances_matrix[22][14]=440;city_to_city_distances_matrix[22][15]=280;city_to_city_distances_matrix[22][16]=270;city_to_city_distances_matrix[22][17]=220;city_to_city_distances_matrix[22][18]=250;city_to_city_distances_matrix[22][19]=240;city_to_city_distances_matrix[22][20]=230;city_to_city_distances_matrix[22][21]=60;city_to_city_distances_matrix[22][22]=0;city_to_city_distances_matrix[22][23]=50;city_to_city_distances_matrix[22][24]=110;city_to_city_distances_matrix[22][25]=140;city_to_city_distances_matrix[22][26]=170;city_to_city_distances_matrix[22][27]=200;city_to_city_distances_matrix[22][28]=230;city_to_city_distances_matrix[22][29]=220;city_to_city_distances_matrix[22][30]=250;city_to_city_distances_matrix[22][31]=260;city_to_city_distances_matrix[22][32]=360;city_to_city_distances_matrix[22][33]=390;city_to_city_distances_matrix[22][34]=410;city_to_city_distances_matrix[22][35]=300;city_to_city_distances_matrix[22][36]=320;city_to_city_distances_matrix[22][37]=330;city_to_city_distances_matrix[22][38]=310;city_to_city_distances_matrix[22][39]=290;city_to_city_distances_matrix[22][40]=300;city_to_city_distances_matrix[22][41]=310;city_to_city_distances_matrix[22][42]=340;city_to_city_distances_matrix[22][43]=400;city_to_city_distances_matrix[22][44]=360;city_to_city_distances_matrix[22][45]=420;city_to_city_distances_matrix[22][46]=380;city_to_city_distances_matrix[22][47]=440;city_to_city_distances_matrix[22][48]=370;city_to_city_distances_matrix[22][49]=330;city_to_city_distances_matrix[22][50]=320;city_to_city_distances_matrix[22][51]=410;city_to_city_distances_matrix[22][52]=440;city_to_city_distances_matrix[22][53]=430;city_to_city_distances_matrix[22][54]=490;city_to_city_distances_matrix[22][55]=470;city_to_city_distances_matrix[22][56]=460;city_to_city_distances_matrix[22][57]=470;city_to_city_distances_matrix[22][58]=540;city_to_city_distances_matrix[22][59]=560;city_to_city_distances_matrix[22][60]=330;city_to_city_distances_matrix[22][61]=360;city_to_city_distances_matrix[22][62]=380;city_to_city_distances_matrix[22][63]=320;
city_to_city_distances_matrix[23][0]=350;city_to_city_distances_matrix[23][1]=360;city_to_city_distances_matrix[23][2]=340;city_to_city_distances_matrix[23][3]=380;city_to_city_distances_matrix[23][4]=355;city_to_city_distances_matrix[23][5]=345;city_to_city_distances_matrix[23][6]=390;city_to_city_distances_matrix[23][7]=400;city_to_city_distances_matrix[23][8]=410;city_to_city_distances_matrix[23][9]=400;city_to_city_distances_matrix[23][10]=470;city_to_city_distances_matrix[23][11]=450;city_to_city_distances_matrix[23][12]=440;city_to_city_distances_matrix[23][13]=330;city_to_city_distances_matrix[23][14]=450;city_to_city_distances_matrix[23][15]=290;city_to_city_distances_matrix[23][16]=280;city_to_city_distances_matrix[23][17]=230;city_to_city_distances_matrix[23][18]=260;city_to_city_distances_matrix[23][19]=250;city_to_city_distances_matrix[23][20]=240;city_to_city_distances_matrix[23][21]=70;city_to_city_distances_matrix[23][22]=50;city_to_city_distances_matrix[23][23]=0;city_to_city_distances_matrix[23][24]=120;city_to_city_distances_matrix[23][25]=150;city_to_city_distances_matrix[23][26]=180;city_to_city_distances_matrix[23][27]=210;city_to_city_distances_matrix[23][28]=240;city_to_city_distances_matrix[23][29]=230;city_to_city_distances_matrix[23][30]=260;city_to_city_distances_matrix[23][31]=270;city_to_city_distances_matrix[23][32]=370;city_to_city_distances_matrix[23][33]=400;city_to_city_distances_matrix[23][34]=420;city_to_city_distances_matrix[23][35]=310;city_to_city_distances_matrix[23][36]=330;city_to_city_distances_matrix[23][37]=340;city_to_city_distances_matrix[23][38]=320;city_to_city_distances_matrix[23][39]=300;city_to_city_distances_matrix[23][40]=310;city_to_city_distances_matrix[23][41]=320;city_to_city_distances_matrix[23][42]=350;city_to_city_distances_matrix[23][43]=410;city_to_city_distances_matrix[23][44]=370;city_to_city_distances_matrix[23][45]=430;city_to_city_distances_matrix[23][46]=390;city_to_city_distances_matrix[23][47]=450;city_to_city_distances_matrix[23][48]=380;city_to_city_distances_matrix[23][49]=340;city_to_city_distances_matrix[23][50]=330;city_to_city_distances_matrix[23][51]=420;city_to_city_distances_matrix[23][52]=450;city_to_city_distances_matrix[23][53]=440;city_to_city_distances_matrix[23][54]=500;city_to_city_distances_matrix[23][55]=480;city_to_city_distances_matrix[23][56]=470;city_to_city_distances_matrix[23][57]=480;city_to_city_distances_matrix[23][58]=550;city_to_city_distances_matrix[23][59]=570;city_to_city_distances_matrix[23][60]=340;city_to_city_distances_matrix[23][61]=370;city_to_city_distances_matrix[23][62]=390;city_to_city_distances_matrix[23][63]=330;
city_to_city_distances_matrix[24][0]=250;city_to_city_distances_matrix[24][1]=260;city_to_city_distances_matrix[24][2]=240;city_to_city_distances_matrix[24][3]=280;city_to_city_distances_matrix[24][4]=255;city_to_city_distances_matrix[24][5]=245;city_to_city_distances_matrix[24][6]=290;city_to_city_distances_matrix[24][7]=300;city_to_city_distances_matrix[24][8]=300;city_to_city_distances_matrix[24][9]=290;city_to_city_distances_matrix[24][10]=310;city_to_city_distances_matrix[24][11]=300;city_to_city_distances_matrix[24][12]=290;city_to_city_distances_matrix[24][13]=240;city_to_city_distances_matrix[24][14]=310;city_to_city_distances_matrix[24][15]=180;city_to_city_distances_matrix[24][16]=175;city_to_city_distances_matrix[24][17]=200;city_to_city_distances_matrix[24][18]=230;city_to_city_distances_matrix[24][19]=220;city_to_city_distances_matrix[24][20]=180;city_to_city_distances_matrix[24][21]=90;city_to_city_distances_matrix[24][22]=110;city_to_city_distances_matrix[24][23]=120;city_to_city_distances_matrix[24][24]=0;city_to_city_distances_matrix[24][25]=60;city_to_city_distances_matrix[24][26]=90;city_to_city_distances_matrix[24][27]=120;city_to_city_distances_matrix[24][28]=150;city_to_city_distances_matrix[24][29]=140;city_to_city_distances_matrix[24][30]=170;city_to_city_distances_matrix[24][31]=180;city_to_city_distances_matrix[24][32]=200;city_to_city_distances_matrix[24][33]=230;city_to_city_distances_matrix[24][34]=250;city_to_city_distances_matrix[24][35]=140;city_to_city_distances_matrix[24][36]=160;city_to_city_distances_matrix[24][37]=170;city_to_city_distances_matrix[24][38]=150;city_to_city_distances_matrix[24][39]=130;city_to_city_distances_matrix[24][40]=140;city_to_city_distances_matrix[24][41]=150;city_to_city_distances_matrix[24][42]=180;city_to_city_distances_matrix[24][43]=120;city_to_city_distances_matrix[24][44]=80;city_to_city_distances_matrix[24][45]=60;city_to_city_distances_matrix[24][46]=40;city_to_city_distances_matrix[24][47]=100;city_to_city_distances_matrix[24][48]=150;city_to_city_distances_matrix[24][49]=120;city_to_city_distances_matrix[24][50]=110;city_to_city_distances_matrix[24][51]=200;city_to_city_distances_matrix[24][52]=260;city_to_city_distances_matrix[24][53]=250;city_to_city_distances_matrix[24][54]=310;city_to_city_distances_matrix[24][55]=290;city_to_city_distances_matrix[24][56]=280;city_to_city_distances_matrix[24][57]=290;city_to_city_distances_matrix[24][58]=360;city_to_city_distances_matrix[24][59]=380;city_to_city_distances_matrix[24][60]=190;city_to_city_distances_matrix[24][61]=220;city_to_city_distances_matrix[24][62]=240;city_to_city_distances_matrix[24][63]=200;
city_to_city_distances_matrix[25][0]=270;city_to_city_distances_matrix[25][1]=280;city_to_city_distances_matrix[25][2]=260;city_to_city_distances_matrix[25][3]=290;city_to_city_distances_matrix[25][4]=265;city_to_city_distances_matrix[25][5]=255;city_to_city_distances_matrix[25][6]=300;city_to_city_distances_matrix[25][7]=310;city_to_city_distances_matrix[25][8]=225;city_to_city_distances_matrix[25][9]=215;city_to_city_distances_matrix[25][10]=285;city_to_city_distances_matrix[25][11]=265;city_to_city_distances_matrix[25][12]=255;city_to_city_distances_matrix[25][13]=290;city_to_city_distances_matrix[25][14]=420;city_to_city_distances_matrix[25][15]=185;city_to_city_distances_matrix[25][16]=180;city_to_city_distances_matrix[25][17]=225;city_to_city_distances_matrix[25][18]=255;city_to_city_distances_matrix[25][19]=245;city_to_city_distances_matrix[25][20]=205;city_to_city_distances_matrix[25][21]=120;city_to_city_distances_matrix[25][22]=140;city_to_city_distances_matrix[25][23]=150;city_to_city_distances_matrix[25][24]=60;city_to_city_distances_matrix[25][25]=0;city_to_city_distances_matrix[25][26]=50;city_to_city_distances_matrix[25][27]=90;city_to_city_distances_matrix[25][28]=130;city_to_city_distances_matrix[25][29]=120;city_to_city_distances_matrix[25][30]=100;city_to_city_distances_matrix[25][31]=110;city_to_city_distances_matrix[25][32]=220;city_to_city_distances_matrix[25][33]=250;city_to_city_distances_matrix[25][34]=270;city_to_city_distances_matrix[25][35]=160;city_to_city_distances_matrix[25][36]=180;city_to_city_distances_matrix[25][37]=190;city_to_city_distances_matrix[25][38]=170;city_to_city_distances_matrix[25][39]=150;city_to_city_distances_matrix[25][40]=160;city_to_city_distances_matrix[25][41]=170;city_to_city_distances_matrix[25][42]=200;city_to_city_distances_matrix[25][43]=160;city_to_city_distances_matrix[25][44]=120;city_to_city_distances_matrix[25][45]=100;city_to_city_distances_matrix[25][46]=80;city_to_city_distances_matrix[25][47]=140;city_to_city_distances_matrix[25][48]=130;city_to_city_distances_matrix[25][49]=90;city_to_city_distances_matrix[25][50]=80;city_to_city_distances_matrix[25][51]=170;city_to_city_distances_matrix[25][52]=210;city_to_city_distances_matrix[25][53]=200;city_to_city_distances_matrix[25][54]=260;city_to_city_distances_matrix[25][55]=240;city_to_city_distances_matrix[25][56]=230;city_to_city_distances_matrix[25][57]=240;city_to_city_distances_matrix[25][58]=310;city_to_city_distances_matrix[25][59]=330;city_to_city_distances_matrix[25][60]=160;city_to_city_distances_matrix[25][61]=190;city_to_city_distances_matrix[25][62]=210;city_to_city_distances_matrix[25][63]=170;
city_to_city_distances_matrix[26][0]=320;city_to_city_distances_matrix[26][1]=330;city_to_city_distances_matrix[26][2]=310;city_to_city_distances_matrix[26][3]=350;city_to_city_distances_matrix[26][4]=325;city_to_city_distances_matrix[26][5]=315;city_to_city_distances_matrix[26][6]=360;city_to_city_distances_matrix[26][7]=370;city_to_city_distances_matrix[26][8]=175;city_to_city_distances_matrix[26][9]=165;city_to_city_distances_matrix[26][10]=235;city_to_city_distances_matrix[26][11]=215;city_to_city_distances_matrix[26][12]=205;city_to_city_distances_matrix[26][13]=240;city_to_city_distances_matrix[26][14]=370;city_to_city_distances_matrix[26][15]=135;city_to_city_distances_matrix[26][16]=130;city_to_city_distances_matrix[26][17]=175;city_to_city_distances_matrix[26][18]=205;city_to_city_distances_matrix[26][19]=195;city_to_city_distances_matrix[26][20]=155;city_to_city_distances_matrix[26][21]=150;city_to_city_distances_matrix[26][22]=170;city_to_city_distances_matrix[26][23]=180;city_to_city_distances_matrix[26][24]=90;city_to_city_distances_matrix[26][25]=50;city_to_city_distances_matrix[26][26]=0;city_to_city_distances_matrix[26][27]=60;city_to_city_distances_matrix[26][28]=100;city_to_city_distances_matrix[26][29]=70;city_to_city_distances_matrix[26][30]=60;city_to_city_distances_matrix[26][31]=80;city_to_city_distances_matrix[26][32]=180;city_to_city_distances_matrix[26][33]=210;city_to_city_distances_matrix[26][34]=230;city_to_city_distances_matrix[26][35]=120;city_to_city_distances_matrix[26][36]=140;city_to_city_distances_matrix[26][37]=150;city_to_city_distances_matrix[26][38]=130;city_to_city_distances_matrix[26][39]=110;city_to_city_distances_matrix[26][40]=120;city_to_city_distances_matrix[26][41]=130;city_to_city_distances_matrix[26][42]=150;city_to_city_distances_matrix[26][43]=190;city_to_city_distances_matrix[26][44]=150;city_to_city_distances_matrix[26][45]=130;city_to_city_distances_matrix[26][46]=110;city_to_city_distances_matrix[26][47]=170;city_to_city_distances_matrix[26][48]=160;city_to_city_distances_matrix[26][49]=120;city_to_city_distances_matrix[26][50]=110;city_to_city_distances_matrix[26][51]=200;city_to_city_distances_matrix[26][52]=240;city_to_city_distances_matrix[26][53]=230;city_to_city_distances_matrix[26][54]=290;city_to_city_distances_matrix[26][55]=270;city_to_city_distances_matrix[26][56]=260;city_to_city_distances_matrix[26][57]=270;city_to_city_distances_matrix[26][58]=340;city_to_city_distances_matrix[26][59]=360;city_to_city_distances_matrix[26][60]=170;city_to_city_distances_matrix[26][61]=200;city_to_city_distances_matrix[26][62]=220;city_to_city_distances_matrix[26][63]=180;
city_to_city_distances_matrix[27][0]=360;city_to_city_distances_matrix[27][1]=370;city_to_city_distances_matrix[27][2]=350;city_to_city_distances_matrix[27][3]=390;city_to_city_distances_matrix[27][4]=365;city_to_city_distances_matrix[27][5]=355;city_to_city_distances_matrix[27][6]=400;city_to_city_distances_matrix[27][7]=410;city_to_city_distances_matrix[27][8]=215;city_to_city_distances_matrix[27][9]=205;city_to_city_distances_matrix[27][10]=275;city_to_city_distances_matrix[27][11]=255;city_to_city_distances_matrix[27][12]=245;city_to_city_distances_matrix[27][13]=280;city_to_city_distances_matrix[27][14]=410;city_to_city_distances_matrix[27][15]=175;city_to_city_distances_matrix[27][16]=170;city_to_city_distances_matrix[27][17]=215;city_to_city_distances_matrix[27][18]=245;city_to_city_distances_matrix[27][19]=235;city_to_city_distances_matrix[27][20]=195;city_to_city_distances_matrix[27][21]=180;city_to_city_distances_matrix[27][22]=200;city_to_city_distances_matrix[27][23]=210;city_to_city_distances_matrix[27][24]=120;city_to_city_distances_matrix[27][25]=90;city_to_city_distances_matrix[27][26]=60;city_to_city_distances_matrix[27][27]=0;city_to_city_distances_matrix[27][28]=140;city_to_city_distances_matrix[27][29]=100;city_to_city_distances_matrix[27][30]=90;city_to_city_distances_matrix[27][31]=110;city_to_city_distances_matrix[27][32]=220;city_to_city_distances_matrix[27][33]=250;city_to_city_distances_matrix[27][34]=270;city_to_city_distances_matrix[27][35]=160;city_to_city_distances_matrix[27][36]=180;city_to_city_distances_matrix[27][37]=190;city_to_city_distances_matrix[27][38]=170;city_to_city_distances_matrix[27][39]=150;city_to_city_distances_matrix[27][40]=160;city_to_city_distances_matrix[27][41]=170;city_to_city_distances_matrix[27][42]=200;city_to_city_distances_matrix[27][43]=240;city_to_city_distances_matrix[27][44]=200;city_to_city_distances_matrix[27][45]=180;city_to_city_distances_matrix[27][46]=160;city_to_city_distances_matrix[27][47]=220;city_to_city_distances_matrix[27][48]=210;city_to_city_distances_matrix[27][49]=170;city_to_city_distances_matrix[27][50]=160;city_to_city_distances_matrix[27][51]=250;city_to_city_distances_matrix[27][52]=290;city_to_city_distances_matrix[27][53]=280;city_to_city_distances_matrix[27][54]=340;city_to_city_distances_matrix[27][55]=320;city_to_city_distances_matrix[27][56]=310;city_to_city_distances_matrix[27][57]=320;city_to_city_distances_matrix[27][58]=390;city_to_city_distances_matrix[27][59]=410;city_to_city_distances_matrix[27][60]=200;city_to_city_distances_matrix[27][61]=230;city_to_city_distances_matrix[27][62]=250;city_to_city_distances_matrix[27][63]=210;
city_to_city_distances_matrix[28][0]=400;city_to_city_distances_matrix[28][1]=410;city_to_city_distances_matrix[28][2]=390;city_to_city_distances_matrix[28][3]=430;city_to_city_distances_matrix[28][4]=405;city_to_city_distances_matrix[28][5]=395;city_to_city_distances_matrix[28][6]=440;city_to_city_distances_matrix[28][7]=450;city_to_city_distances_matrix[28][8]=150;city_to_city_distances_matrix[28][9]=140;city_to_city_distances_matrix[28][10]=210;city_to_city_distances_matrix[28][11]=190;city_to_city_distances_matrix[28][12]=180;city_to_city_distances_matrix[28][13]=215;city_to_city_distances_matrix[28][14]=345;city_to_city_distances_matrix[28][15]=110;city_to_city_distances_matrix[28][16]=105;city_to_city_distances_matrix[28][17]=150;city_to_city_distances_matrix[28][18]=180;city_to_city_distances_matrix[28][19]=170;city_to_city_distances_matrix[28][20]=130;city_to_city_distances_matrix[28][21]=210;city_to_city_distances_matrix[28][22]=230;city_to_city_distances_matrix[28][23]=240;city_to_city_distances_matrix[28][24]=150;city_to_city_distances_matrix[28][25]=130;city_to_city_distances_matrix[28][26]=100;city_to_city_distances_matrix[28][27]=140;city_to_city_distances_matrix[28][28]=0;city_to_city_distances_matrix[28][29]=60;city_to_city_distances_matrix[28][30]=90;city_to_city_distances_matrix[28][31]=110;city_to_city_distances_matrix[28][32]=220;city_to_city_distances_matrix[28][33]=250;city_to_city_distances_matrix[28][34]=270;city_to_city_distances_matrix[28][35]=160;city_to_city_distances_matrix[28][36]=180;city_to_city_distances_matrix[28][37]=190;city_to_city_distances_matrix[28][38]=170;city_to_city_distances_matrix[28][39]=150;city_to_city_distances_matrix[28][40]=160;city_to_city_distances_matrix[28][41]=170;city_to_city_distances_matrix[28][42]=200;city_to_city_distances_matrix[28][43]=140;city_to_city_distances_matrix[28][44]=100;city_to_city_distances_matrix[28][45]=80;city_to_city_distances_matrix[28][46]=60;city_to_city_distances_matrix[28][47]=120;city_to_city_distances_matrix[28][48]=150;city_to_city_distances_matrix[28][49]=120;city_to_city_distances_matrix[28][50]=110;city_to_city_distances_matrix[28][51]=200;city_to_city_distances_matrix[28][52]=240;city_to_city_distances_matrix[28][53]=230;city_to_city_distances_matrix[28][54]=290;city_to_city_distances_matrix[28][55]=270;city_to_city_distances_matrix[28][56]=260;city_to_city_distances_matrix[28][57]=270;city_to_city_distances_matrix[28][58]=340;city_to_city_distances_matrix[28][59]=360;city_to_city_distances_matrix[28][60]=180;city_to_city_distances_matrix[28][61]=210;city_to_city_distances_matrix[28][62]=230;city_to_city_distances_matrix[28][63]=190;
city_to_city_distances_matrix[29][0]=380;city_to_city_distances_matrix[29][1]=390;city_to_city_distances_matrix[29][2]=370;city_to_city_distances_matrix[29][3]=410;city_to_city_distances_matrix[29][4]=385;city_to_city_distances_matrix[29][5]=375;city_to_city_distances_matrix[29][6]=420;city_to_city_distances_matrix[29][7]=430;city_to_city_distances_matrix[29][8]=205;city_to_city_distances_matrix[29][9]=195;city_to_city_distances_matrix[29][10]=265;city_to_city_distances_matrix[29][11]=245;city_to_city_distances_matrix[29][12]=235;city_to_city_distances_matrix[29][13]=270;city_to_city_distances_matrix[29][14]=400;city_to_city_distances_matrix[29][15]=165;city_to_city_distances_matrix[29][16]=160;city_to_city_distances_matrix[29][17]=205;city_to_city_distances_matrix[29][18]=235;city_to_city_distances_matrix[29][19]=225;city_to_city_distances_matrix[29][20]=185;city_to_city_distances_matrix[29][21]=200;city_to_city_distances_matrix[29][22]=220;city_to_city_distances_matrix[29][23]=230;city_to_city_distances_matrix[29][24]=140;city_to_city_distances_matrix[29][25]=120;city_to_city_distances_matrix[29][26]=70;city_to_city_distances_matrix[29][27]=100;city_to_city_distances_matrix[29][28]=60;city_to_city_distances_matrix[29][29]=0;city_to_city_distances_matrix[29][30]=110;city_to_city_distances_matrix[29][31]=130;city_to_city_distances_matrix[29][32]=240;city_to_city_distances_matrix[29][33]=270;city_to_city_distances_matrix[29][34]=290;city_to_city_distances_matrix[29][35]=180;city_to_city_distances_matrix[29][36]=200;city_to_city_distances_matrix[29][37]=210;city_to_city_distances_matrix[29][38]=190;city_to_city_distances_matrix[29][39]=170;city_to_city_distances_matrix[29][40]=180;city_to_city_distances_matrix[29][41]=190;city_to_city_distances_matrix[29][42]=220;city_to_city_distances_matrix[29][43]=180;city_to_city_distances_matrix[29][44]=140;city_to_city_distances_matrix[29][45]=120;city_to_city_distances_matrix[29][46]=100;city_to_city_distances_matrix[29][47]=160;city_to_city_distances_matrix[29][48]=170;city_to_city_distances_matrix[29][49]=130;city_to_city_distances_matrix[29][50]=120;city_to_city_distances_matrix[29][51]=210;city_to_city_distances_matrix[29][52]=250;city_to_city_distances_matrix[29][53]=240;city_to_city_distances_matrix[29][54]=300;city_to_city_distances_matrix[29][55]=280;city_to_city_distances_matrix[29][56]=270;city_to_city_distances_matrix[29][57]=280;city_to_city_distances_matrix[29][58]=350;city_to_city_distances_matrix[29][59]=370;city_to_city_distances_matrix[29][60]=190;city_to_city_distances_matrix[29][61]=220;city_to_city_distances_matrix[29][62]=240;city_to_city_distances_matrix[29][63]=200;
city_to_city_distances_matrix[30][0]=290;city_to_city_distances_matrix[30][1]=300;city_to_city_distances_matrix[30][2]=280;city_to_city_distances_matrix[30][3]=320;city_to_city_distances_matrix[30][4]=295;city_to_city_distances_matrix[30][5]=285;city_to_city_distances_matrix[30][6]=330;city_to_city_distances_matrix[30][7]=340;city_to_city_distances_matrix[30][8]=115;city_to_city_distances_matrix[30][9]=105;city_to_city_distances_matrix[30][10]=175;city_to_city_distances_matrix[30][11]=155;city_to_city_distances_matrix[30][12]=145;city_to_city_distances_matrix[30][13]=180;city_to_city_distances_matrix[30][14]=360;city_to_city_distances_matrix[30][15]=75;city_to_city_distances_matrix[30][16]=70;city_to_city_distances_matrix[30][17]=115;city_to_city_distances_matrix[30][18]=145;city_to_city_distances_matrix[30][19]=135;city_to_city_distances_matrix[30][20]=95;city_to_city_distances_matrix[30][21]=230;city_to_city_distances_matrix[30][22]=250;city_to_city_distances_matrix[30][23]=260;city_to_city_distances_matrix[30][24]=170;city_to_city_distances_matrix[30][25]=100;city_to_city_distances_matrix[30][26]=60;city_to_city_distances_matrix[30][27]=90;city_to_city_distances_matrix[30][28]=90;city_to_city_distances_matrix[30][29]=110;city_to_city_distances_matrix[30][30]=0;city_to_city_distances_matrix[30][31]=60;city_to_city_distances_matrix[30][32]=170;city_to_city_distances_matrix[30][33]=200;city_to_city_distances_matrix[30][34]=220;city_to_city_distances_matrix[30][35]=110;city_to_city_distances_matrix[30][36]=130;city_to_city_distances_matrix[30][37]=140;city_to_city_distances_matrix[30][38]=120;city_to_city_distances_matrix[30][39]=100;city_to_city_distances_matrix[30][40]=110;city_to_city_distances_matrix[30][41]=120;city_to_city_distances_matrix[30][42]=150;city_to_city_distances_matrix[30][43]=170;city_to_city_distances_matrix[30][44]=130;city_to_city_distances_matrix[30][45]=110;city_to_city_distances_matrix[30][46]=90;city_to_city_distances_matrix[30][47]=150;city_to_city_distances_matrix[30][48]=120;city_to_city_distances_matrix[30][49]=80;city_to_city_distances_matrix[30][50]=70;city_to_city_distances_matrix[30][51]=160;city_to_city_distances_matrix[30][52]=200;city_to_city_distances_matrix[30][53]=190;city_to_city_distances_matrix[30][54]=250;city_to_city_distances_matrix[30][55]=230;city_to_city_distances_matrix[30][56]=220;city_to_city_distances_matrix[30][57]=230;city_to_city_distances_matrix[30][58]=300;city_to_city_distances_matrix[30][59]=320;city_to_city_distances_matrix[30][60]=150;city_to_city_distances_matrix[30][61]=180;city_to_city_distances_matrix[30][62]=200;city_to_city_distances_matrix[30][63]=160;
city_to_city_distances_matrix[31][0]=310;city_to_city_distances_matrix[31][1]=320;city_to_city_distances_matrix[31][2]=300;city_to_city_distances_matrix[31][3]=340;city_to_city_distances_matrix[31][4]=315;city_to_city_distances_matrix[31][5]=305;city_to_city_distances_matrix[31][6]=350;city_to_city_distances_matrix[31][7]=360;city_to_city_distances_matrix[31][8]=95;city_to_city_distances_matrix[31][9]=85;city_to_city_distances_matrix[31][10]=155;city_to_city_distances_matrix[31][11]=135;city_to_city_distances_matrix[31][12]=125;city_to_city_distances_matrix[31][13]=160;city_to_city_distances_matrix[31][14]=340;city_to_city_distances_matrix[31][15]=55;city_to_city_distances_matrix[31][16]=50;city_to_city_distances_matrix[31][17]=95;city_to_city_distances_matrix[31][18]=125;city_to_city_distances_matrix[31][19]=115;city_to_city_distances_matrix[31][20]=75;city_to_city_distances_matrix[31][21]=240;city_to_city_distances_matrix[31][22]=260;city_to_city_distances_matrix[31][23]=270;city_to_city_distances_matrix[31][24]=180;city_to_city_distances_matrix[31][25]=110;city_to_city_distances_matrix[31][26]=80;city_to_city_distances_matrix[31][27]=110;city_to_city_distances_matrix[31][28]=110;city_to_city_distances_matrix[31][29]=130;city_to_city_distances_matrix[31][30]=60;city_to_city_distances_matrix[31][31]=0;city_to_city_distances_matrix[31][32]=180;city_to_city_distances_matrix[31][33]=210;city_to_city_distances_matrix[31][34]=230;city_to_city_distances_matrix[31][35]=120;city_to_city_distances_matrix[31][36]=140;city_to_city_distances_matrix[31][37]=150;city_to_city_distances_matrix[31][38]=130;city_to_city_distances_matrix[31][39]=110;city_to_city_distances_matrix[31][40]=120;city_to_city_distances_matrix[31][41]=130;city_to_city_distances_matrix[31][42]=160;city_to_city_distances_matrix[31][43]=180;city_to_city_distances_matrix[31][44]=140;city_to_city_distances_matrix[31][45]=120;city_to_city_distances_matrix[31][46]=100;city_to_city_distances_matrix[31][47]=160;city_to_city_distances_matrix[31][48]=130;city_to_city_distances_matrix[31][49]=90;city_to_city_distances_matrix[31][50]=80;city_to_city_distances_matrix[31][51]=170;city_to_city_distances_matrix[31][52]=210;city_to_city_distances_matrix[31][53]=200;city_to_city_distances_matrix[31][54]=260;city_to_city_distances_matrix[31][55]=240;city_to_city_distances_matrix[31][56]=230;city_to_city_distances_matrix[31][57]=240;city_to_city_distances_matrix[31][58]=310;city_to_city_distances_matrix[31][59]=330;city_to_city_distances_matrix[31][60]=160;city_to_city_distances_matrix[31][61]=190;city_to_city_distances_matrix[31][62]=210;city_to_city_distances_matrix[31][63]=170;
city_to_city_distances_matrix[32][0]=330;city_to_city_distances_matrix[32][1]=340;city_to_city_distances_matrix[32][2]=320;city_to_city_distances_matrix[32][3]=360;city_to_city_distances_matrix[32][4]=335;city_to_city_distances_matrix[32][5]=325;city_to_city_distances_matrix[32][6]=370;city_to_city_distances_matrix[32][7]=380;city_to_city_distances_matrix[32][8]=130;city_to_city_distances_matrix[32][9]=120;city_to_city_distances_matrix[32][10]=190;city_to_city_distances_matrix[32][11]=170;city_to_city_distances_matrix[32][12]=160;city_to_city_distances_matrix[32][13]=190;city_to_city_distances_matrix[32][14]=380;city_to_city_distances_matrix[32][15]=70;city_to_city_distances_matrix[32][16]=65;city_to_city_distances_matrix[32][17]=110;city_to_city_distances_matrix[32][18]=140;city_to_city_distances_matrix[32][19]=130;city_to_city_distances_matrix[32][20]=90;city_to_city_distances_matrix[32][21]=250;city_to_city_distances_matrix[32][22]=270;city_to_city_distances_matrix[32][23]=280;city_to_city_distances_matrix[32][24]=200;city_to_city_distances_matrix[32][25]=220;city_to_city_distances_matrix[32][26]=180;city_to_city_distances_matrix[32][27]=220;city_to_city_distances_matrix[32][28]=220;city_to_city_distances_matrix[32][29]=240;city_to_city_distances_matrix[32][30]=170;city_to_city_distances_matrix[32][31]=180;city_to_city_distances_matrix[32][32]=0;city_to_city_distances_matrix[32][33]=120;city_to_city_distances_matrix[32][34]=140;city_to_city_distances_matrix[32][35]=110;city_to_city_distances_matrix[32][36]=130;city_to_city_distances_matrix[32][37]=140;city_to_city_distances_matrix[32][38]=120;city_to_city_distances_matrix[32][39]=100;city_to_city_distances_matrix[32][40]=110;city_to_city_distances_matrix[32][41]=120;city_to_city_distances_matrix[32][42]=150;city_to_city_distances_matrix[32][43]=170;city_to_city_distances_matrix[32][44]=130;city_to_city_distances_matrix[32][45]=110;city_to_city_distances_matrix[32][46]=90;city_to_city_distances_matrix[32][47]=150;city_to_city_distances_matrix[32][48]=120;city_to_city_distances_matrix[32][49]=80;city_to_city_distances_matrix[32][50]=70;city_to_city_distances_matrix[32][51]=160;city_to_city_distances_matrix[32][52]=200;city_to_city_distances_matrix[32][53]=190;city_to_city_distances_matrix[32][54]=250;city_to_city_distances_matrix[32][55]=230;city_to_city_distances_matrix[32][56]=220;city_to_city_distances_matrix[32][57]=230;city_to_city_distances_matrix[32][58]=300;city_to_city_distances_matrix[32][59]=320;city_to_city_distances_matrix[32][60]=150;city_to_city_distances_matrix[32][61]=180;city_to_city_distances_matrix[32][62]=200;city_to_city_distances_matrix[32][63]=160;
city_to_city_distances_matrix[33][0]=260;city_to_city_distances_matrix[33][1]=270;city_to_city_distances_matrix[33][2]=250;city_to_city_distances_matrix[33][3]=290;city_to_city_distances_matrix[33][4]=265;city_to_city_distances_matrix[33][5]=255;city_to_city_distances_matrix[33][6]=300;city_to_city_distances_matrix[33][7]=310;city_to_city_distances_matrix[33][8]=230;city_to_city_distances_matrix[33][9]=220;city_to_city_distances_matrix[33][10]=290;city_to_city_distances_matrix[33][11]=270;city_to_city_distances_matrix[33][12]=260;city_to_city_distances_matrix[33][13]=220;city_to_city_distances_matrix[33][14]=340;city_to_city_distances_matrix[33][15]=160;city_to_city_distances_matrix[33][16]=150;city_to_city_distances_matrix[33][17]=260;city_to_city_distances_matrix[33][18]=290;city_to_city_distances_matrix[33][19]=280;city_to_city_distances_matrix[33][20]=240;city_to_city_distances_matrix[33][21]=370;city_to_city_distances_matrix[33][22]=390;city_to_city_distances_matrix[33][23]=400;city_to_city_distances_matrix[33][24]=230;city_to_city_distances_matrix[33][25]=250;city_to_city_distances_matrix[33][26]=210;city_to_city_distances_matrix[33][27]=250;city_to_city_distances_matrix[33][28]=250;city_to_city_distances_matrix[33][29]=270;city_to_city_distances_matrix[33][30]=200;city_to_city_distances_matrix[33][31]=210;city_to_city_distances_matrix[33][32]=120;city_to_city_distances_matrix[33][33]=0;city_to_city_distances_matrix[33][34]=60;city_to_city_distances_matrix[33][35]=90;city_to_city_distances_matrix[33][36]=70;city_to_city_distances_matrix[33][37]=80;city_to_city_distances_matrix[33][38]=100;city_to_city_distances_matrix[33][39]=120;city_to_city_distances_matrix[33][40]=130;city_to_city_distances_matrix[33][41]=140;city_to_city_distances_matrix[33][42]=170;city_to_city_distances_matrix[33][43]=190;city_to_city_distances_matrix[33][44]=150;city_to_city_distances_matrix[33][45]=130;city_to_city_distances_matrix[33][46]=110;city_to_city_distances_matrix[33][47]=170;city_to_city_distances_matrix[33][48]=140;city_to_city_distances_matrix[33][49]=100;city_to_city_distances_matrix[33][50]=90;city_to_city_distances_matrix[33][51]=180;city_to_city_distances_matrix[33][52]=220;city_to_city_distances_matrix[33][53]=210;city_to_city_distances_matrix[33][54]=270;city_to_city_distances_matrix[33][55]=250;city_to_city_distances_matrix[33][56]=240;city_to_city_distances_matrix[33][57]=250;city_to_city_distances_matrix[33][58]=320;city_to_city_distances_matrix[33][59]=340;city_to_city_distances_matrix[33][60]=170;city_to_city_distances_matrix[33][61]=200;city_to_city_distances_matrix[33][62]=220;city_to_city_distances_matrix[33][63]=180;
city_to_city_distances_matrix[34][0]=280;city_to_city_distances_matrix[34][1]=290;city_to_city_distances_matrix[34][2]=270;city_to_city_distances_matrix[34][3]=310;city_to_city_distances_matrix[34][4]=285;city_to_city_distances_matrix[34][5]=275;city_to_city_distances_matrix[34][6]=320;city_to_city_distances_matrix[34][7]=330;city_to_city_distances_matrix[34][8]=250;city_to_city_distances_matrix[34][9]=240;city_to_city_distances_matrix[34][10]=310;city_to_city_distances_matrix[34][11]=290;city_to_city_distances_matrix[34][12]=280;city_to_city_distances_matrix[34][13]=240;city_to_city_distances_matrix[34][14]=360;city_to_city_distances_matrix[34][15]=180;city_to_city_distances_matrix[34][16]=170;city_to_city_distances_matrix[34][17]=280;city_to_city_distances_matrix[34][18]=310;city_to_city_distances_matrix[34][19]=300;city_to_city_distances_matrix[34][20]=260;city_to_city_distances_matrix[34][21]=390;city_to_city_distances_matrix[34][22]=410;city_to_city_distances_matrix[34][23]=420;city_to_city_distances_matrix[34][24]=250;city_to_city_distances_matrix[34][25]=270;city_to_city_distances_matrix[34][26]=230;city_to_city_distances_matrix[34][27]=270;city_to_city_distances_matrix[34][28]=270;city_to_city_distances_matrix[34][29]=290;city_to_city_distances_matrix[34][30]=220;city_to_city_distances_matrix[34][31]=230;city_to_city_distances_matrix[34][32]=140;city_to_city_distances_matrix[34][33]=60;city_to_city_distances_matrix[34][34]=0;city_to_city_distances_matrix[34][35]=110;city_to_city_distances_matrix[34][36]=90;city_to_city_distances_matrix[34][37]=100;city_to_city_distances_matrix[34][38]=120;city_to_city_distances_matrix[34][39]=140;city_to_city_distances_matrix[34][40]=150;city_to_city_distances_matrix[34][41]=160;city_to_city_distances_matrix[34][42]=190;city_to_city_distances_matrix[34][43]=210;city_to_city_distances_matrix[34][44]=170;city_to_city_distances_matrix[34][45]=150;city_to_city_distances_matrix[34][46]=130;city_to_city_distances_matrix[34][47]=190;city_to_city_distances_matrix[34][48]=160;city_to_city_distances_matrix[34][49]=120;city_to_city_distances_matrix[34][50]=110;city_to_city_distances_matrix[34][51]=200;city_to_city_distances_matrix[34][52]=240;city_to_city_distances_matrix[34][53]=230;city_to_city_distances_matrix[34][54]=290;city_to_city_distances_matrix[34][55]=270;city_to_city_distances_matrix[34][56]=260;city_to_city_distances_matrix[34][57]=270;city_to_city_distances_matrix[34][58]=340;city_to_city_distances_matrix[34][59]=360;city_to_city_distances_matrix[34][60]=190;city_to_city_distances_matrix[34][61]=220;city_to_city_distances_matrix[34][62]=240;city_to_city_distances_matrix[34][63]=200;
city_to_city_distances_matrix[35][0]=240;city_to_city_distances_matrix[35][1]=250;city_to_city_distances_matrix[35][2]=230;city_to_city_distances_matrix[35][3]=270;city_to_city_distances_matrix[35][4]=245;city_to_city_distances_matrix[35][5]=235;city_to_city_distances_matrix[35][6]=280;city_to_city_distances_matrix[35][7]=290;city_to_city_distances_matrix[35][8]=200;city_to_city_distances_matrix[35][9]=190;city_to_city_distances_matrix[35][10]=260;city_to_city_distances_matrix[35][11]=240;city_to_city_distances_matrix[35][12]=230;city_to_city_distances_matrix[35][13]=190;city_to_city_distances_matrix[35][14]=310;city_to_city_distances_matrix[35][15]=150;city_to_city_distances_matrix[35][16]=140;city_to_city_distances_matrix[35][17]=170;city_to_city_distances_matrix[35][18]=200;city_to_city_distances_matrix[35][19]=190;city_to_city_distances_matrix[35][20]=150;city_to_city_distances_matrix[35][21]=280;city_to_city_distances_matrix[35][22]=300;city_to_city_distances_matrix[35][23]=310;city_to_city_distances_matrix[35][24]=140;city_to_city_distances_matrix[35][25]=160;city_to_city_distances_matrix[35][26]=120;city_to_city_distances_matrix[35][27]=160;city_to_city_distances_matrix[35][28]=160;city_to_city_distances_matrix[35][29]=180;city_to_city_distances_matrix[35][30]=110;city_to_city_distances_matrix[35][31]=120;city_to_city_distances_matrix[35][32]=110;city_to_city_distances_matrix[35][33]=90;city_to_city_distances_matrix[35][34]=110;city_to_city_distances_matrix[35][35]=0;city_to_city_distances_matrix[35][36]=60;city_to_city_distances_matrix[35][37]=70;city_to_city_distances_matrix[35][38]=50;city_to_city_distances_matrix[35][39]=30;city_to_city_distances_matrix[35][40]=40;city_to_city_distances_matrix[35][41]=50;city_to_city_distances_matrix[35][42]=100;city_to_city_distances_matrix[35][43]=140;city_to_city_distances_matrix[35][44]=100;city_to_city_distances_matrix[35][45]=80;city_to_city_distances_matrix[35][46]=60;city_to_city_distances_matrix[35][47]=120;city_to_city_distances_matrix[35][48]=90;city_to_city_distances_matrix[35][49]=70;city_to_city_distances_matrix[35][50]=60;city_to_city_distances_matrix[35][51]=150;city_to_city_distances_matrix[35][52]=190;city_to_city_distances_matrix[35][53]=180;city_to_city_distances_matrix[35][54]=240;city_to_city_distances_matrix[35][55]=220;city_to_city_distances_matrix[35][56]=210;city_to_city_distances_matrix[35][57]=220;city_to_city_distances_matrix[35][58]=290;city_to_city_distances_matrix[35][59]=310;city_to_city_distances_matrix[35][60]=140;city_to_city_distances_matrix[35][61]=170;city_to_city_distances_matrix[35][62]=190;city_to_city_distances_matrix[35][63]=150;
city_to_city_distances_matrix[36][0]=260;city_to_city_distances_matrix[36][1]=270;city_to_city_distances_matrix[36][2]=250;city_to_city_distances_matrix[36][3]=290;city_to_city_distances_matrix[36][4]=265;city_to_city_distances_matrix[36][5]=255;city_to_city_distances_matrix[36][6]=300;city_to_city_distances_matrix[36][7]=310;city_to_city_distances_matrix[36][8]=210;city_to_city_distances_matrix[36][9]=200;city_to_city_distances_matrix[36][10]=270;city_to_city_distances_matrix[36][11]=250;city_to_city_distances_matrix[36][12]=240;city_to_city_distances_matrix[36][13]=200;city_to_city_distances_matrix[36][14]=320;city_to_city_distances_matrix[36][15]=160;city_to_city_distances_matrix[36][16]=150;city_to_city_distances_matrix[36][17]=180;city_to_city_distances_matrix[36][18]=210;city_to_city_distances_matrix[36][19]=200;city_to_city_distances_matrix[36][20]=160;city_to_city_distances_matrix[36][21]=300;city_to_city_distances_matrix[36][22]=320;city_to_city_distances_matrix[36][23]=330;city_to_city_distances_matrix[36][24]=160;city_to_city_distances_matrix[36][25]=180;city_to_city_distances_matrix[36][26]=140;city_to_city_distances_matrix[36][27]=180;city_to_city_distances_matrix[36][28]=180;city_to_city_distances_matrix[36][29]=200;city_to_city_distances_matrix[36][30]=130;city_to_city_distances_matrix[36][31]=140;city_to_city_distances_matrix[36][32]=130;city_to_city_distances_matrix[36][33]=70;city_to_city_distances_matrix[36][34]=90;city_to_city_distances_matrix[36][35]=60;city_to_city_distances_matrix[36][36]=0;city_to_city_distances_matrix[36][37]=60;city_to_city_distances_matrix[36][38]=80;city_to_city_distances_matrix[36][39]=100;city_to_city_distances_matrix[36][40]=110;city_to_city_distances_matrix[36][41]=120;city_to_city_distances_matrix[36][42]=150;city_to_city_distances_matrix[36][43]=150;city_to_city_distances_matrix[36][44]=110;city_to_city_distances_matrix[36][45]=90;city_to_city_distances_matrix[36][46]=70;city_to_city_distances_matrix[36][47]=130;city_to_city_distances_matrix[36][48]=100;city_to_city_distances_matrix[36][49]=80;city_to_city_distances_matrix[36][50]=70;city_to_city_distances_matrix[36][51]=160;city_to_city_distances_matrix[36][52]=200;city_to_city_distances_matrix[36][53]=190;city_to_city_distances_matrix[36][54]=250;city_to_city_distances_matrix[36][55]=230;city_to_city_distances_matrix[36][56]=220;city_to_city_distances_matrix[36][57]=230;city_to_city_distances_matrix[36][58]=300;city_to_city_distances_matrix[36][59]=320;city_to_city_distances_matrix[36][60]=150;city_to_city_distances_matrix[36][61]=180;city_to_city_distances_matrix[36][62]=200;city_to_city_distances_matrix[36][63]=160;
city_to_city_distances_matrix[37][0]=270;city_to_city_distances_matrix[37][1]=280;city_to_city_distances_matrix[37][2]=260;city_to_city_distances_matrix[37][3]=300;city_to_city_distances_matrix[37][4]=275;city_to_city_distances_matrix[37][5]=265;city_to_city_distances_matrix[37][6]=310;city_to_city_distances_matrix[37][7]=320;city_to_city_distances_matrix[37][8]=220;city_to_city_distances_matrix[37][9]=210;city_to_city_distances_matrix[37][10]=280;city_to_city_distances_matrix[37][11]=260;city_to_city_distances_matrix[37][12]=250;city_to_city_distances_matrix[37][13]=210;city_to_city_distances_matrix[37][14]=330;city_to_city_distances_matrix[37][15]=170;city_to_city_distances_matrix[37][16]=160;city_to_city_distances_matrix[37][17]=190;city_to_city_distances_matrix[37][18]=220;city_to_city_distances_matrix[37][19]=210;city_to_city_distances_matrix[37][20]=170;city_to_city_distances_matrix[37][21]=310;city_to_city_distances_matrix[37][22]=330;city_to_city_distances_matrix[37][23]=340;city_to_city_distances_matrix[37][24]=170;city_to_city_distances_matrix[37][25]=190;city_to_city_distances_matrix[37][26]=150;city_to_city_distances_matrix[37][27]=190;city_to_city_distances_matrix[37][28]=190;city_to_city_distances_matrix[37][29]=210;city_to_city_distances_matrix[37][30]=140;city_to_city_distances_matrix[37][31]=150;city_to_city_distances_matrix[37][32]=140;city_to_city_distances_matrix[37][33]=80;city_to_city_distances_matrix[37][34]=100;city_to_city_distances_matrix[37][35]=70;city_to_city_distances_matrix[37][36]=60;city_to_city_distances_matrix[37][37]=0;city_to_city_distances_matrix[37][38]=90;city_to_city_distances_matrix[37][39]=110;city_to_city_distances_matrix[37][40]=120;city_to_city_distances_matrix[37][41]=130;city_to_city_distances_matrix[37][42]=160;city_to_city_distances_matrix[37][43]=160;city_to_city_distances_matrix[37][44]=120;city_to_city_distances_matrix[37][45]=100;city_to_city_distances_matrix[37][46]=80;city_to_city_distances_matrix[37][47]=140;city_to_city_distances_matrix[37][48]=110;city_to_city_distances_matrix[37][49]=90;city_to_city_distances_matrix[37][50]=80;city_to_city_distances_matrix[37][51]=170;city_to_city_distances_matrix[37][52]=210;city_to_city_distances_matrix[37][53]=200;city_to_city_distances_matrix[37][54]=260;city_to_city_distances_matrix[37][55]=240;city_to_city_distances_matrix[37][56]=230;city_to_city_distances_matrix[37][57]=240;city_to_city_distances_matrix[37][58]=310;city_to_city_distances_matrix[37][59]=330;city_to_city_distances_matrix[37][60]=160;city_to_city_distances_matrix[37][61]=190;city_to_city_distances_matrix[37][62]=210;city_to_city_distances_matrix[37][63]=170;
city_to_city_distances_matrix[38][0]=250;city_to_city_distances_matrix[38][1]=260;city_to_city_distances_matrix[38][2]=240;city_to_city_distances_matrix[38][3]=280;city_to_city_distances_matrix[38][4]=255;city_to_city_distances_matrix[38][5]=245;city_to_city_distances_matrix[38][6]=290;city_to_city_distances_matrix[38][7]=300;city_to_city_distances_matrix[38][8]=200;city_to_city_distances_matrix[38][9]=190;city_to_city_distances_matrix[38][10]=260;city_to_city_distances_matrix[38][11]=240;city_to_city_distances_matrix[38][12]=230;city_to_city_distances_matrix[38][13]=190;city_to_city_distances_matrix[38][14]=310;city_to_city_distances_matrix[38][15]=150;city_to_city_distances_matrix[38][16]=140;city_to_city_distances_matrix[38][17]=180;city_to_city_distances_matrix[38][18]=210;city_to_city_distances_matrix[38][19]=200;city_to_city_distances_matrix[38][20]=160;city_to_city_distances_matrix[38][21]=290;city_to_city_distances_matrix[38][22]=310;city_to_city_distances_matrix[38][23]=320;city_to_city_distances_matrix[38][24]=150;city_to_city_distances_matrix[38][25]=170;city_to_city_distances_matrix[38][26]=130;city_to_city_distances_matrix[38][27]=170;city_to_city_distances_matrix[38][28]=170;city_to_city_distances_matrix[38][29]=190;city_to_city_distances_matrix[38][30]=120;city_to_city_distances_matrix[38][31]=130;city_to_city_distances_matrix[38][32]=120;city_to_city_distances_matrix[38][33]=100;city_to_city_distances_matrix[38][34]=120;city_to_city_distances_matrix[38][35]=50;city_to_city_distances_matrix[38][36]=80;city_to_city_distances_matrix[38][37]=90;city_to_city_distances_matrix[38][38]=0;city_to_city_distances_matrix[38][39]=60;city_to_city_distances_matrix[38][40]=70;city_to_city_distances_matrix[38][41]=80;city_to_city_distances_matrix[38][42]=130;city_to_city_distances_matrix[38][43]=150;city_to_city_distances_matrix[38][44]=110;city_to_city_distances_matrix[38][45]=90;city_to_city_distances_matrix[38][46]=70;city_to_city_distances_matrix[38][47]=130;city_to_city_distances_matrix[38][48]=100;city_to_city_distances_matrix[38][49]=80;city_to_city_distances_matrix[38][50]=70;city_to_city_distances_matrix[38][51]=160;city_to_city_distances_matrix[38][52]=200;city_to_city_distances_matrix[38][53]=190;city_to_city_distances_matrix[38][54]=250;city_to_city_distances_matrix[38][55]=230;city_to_city_distances_matrix[38][56]=220;city_to_city_distances_matrix[38][57]=230;city_to_city_distances_matrix[38][58]=300;city_to_city_distances_matrix[38][59]=320;city_to_city_distances_matrix[38][60]=140;city_to_city_distances_matrix[38][61]=170;city_to_city_distances_matrix[38][62]=190;city_to_city_distances_matrix[38][63]=150;
city_to_city_distances_matrix[39][0]=230;city_to_city_distances_matrix[39][1]=240;city_to_city_distances_matrix[39][2]=220;city_to_city_distances_matrix[39][3]=260;city_to_city_distances_matrix[39][4]=235;city_to_city_distances_matrix[39][5]=225;city_to_city_distances_matrix[39][6]=270;city_to_city_distances_matrix[39][7]=280;city_to_city_distances_matrix[39][8]=180;city_to_city_distances_matrix[39][9]=170;city_to_city_distances_matrix[39][10]=240;city_to_city_distances_matrix[39][11]=220;city_to_city_distances_matrix[39][12]=210;city_to_city_distances_matrix[39][13]=170;city_to_city_distances_matrix[39][14]=290;city_to_city_distances_matrix[39][15]=130;city_to_city_distances_matrix[39][16]=120;city_to_city_distances_matrix[39][17]=160;city_to_city_distances_matrix[39][18]=190;city_to_city_distances_matrix[39][19]=180;city_to_city_distances_matrix[39][20]=140;city_to_city_distances_matrix[39][21]=270;city_to_city_distances_matrix[39][22]=290;city_to_city_distances_matrix[39][23]=300;city_to_city_distances_matrix[39][24]=130;city_to_city_distances_matrix[39][25]=150;city_to_city_distances_matrix[39][26]=110;city_to_city_distances_matrix[39][27]=150;city_to_city_distances_matrix[39][28]=150;city_to_city_distances_matrix[39][29]=170;city_to_city_distances_matrix[39][30]=100;city_to_city_distances_matrix[39][31]=110;city_to_city_distances_matrix[39][32]=100;city_to_city_distances_matrix[39][33]=120;city_to_city_distances_matrix[39][34]=140;city_to_city_distances_matrix[39][35]=30;city_to_city_distances_matrix[39][36]=100;city_to_city_distances_matrix[39][37]=110;city_to_city_distances_matrix[39][38]=60;city_to_city_distances_matrix[39][39]=0;city_to_city_distances_matrix[39][40]=40;city_to_city_distances_matrix[39][41]=50;city_to_city_distances_matrix[39][42]=110;city_to_city_distances_matrix[39][43]=150;city_to_city_distances_matrix[39][44]=110;city_to_city_distances_matrix[39][45]=90;city_to_city_distances_matrix[39][46]=70;city_to_city_distances_matrix[39][47]=130;city_to_city_distances_matrix[39][48]=100;city_to_city_distances_matrix[39][49]=80;city_to_city_distances_matrix[39][50]=70;city_to_city_distances_matrix[39][51]=160;city_to_city_distances_matrix[39][52]=200;city_to_city_distances_matrix[39][53]=190;city_to_city_distances_matrix[39][54]=250;city_to_city_distances_matrix[39][55]=230;city_to_city_distances_matrix[39][56]=220;city_to_city_distances_matrix[39][57]=230;city_to_city_distances_matrix[39][58]=300;city_to_city_distances_matrix[39][59]=320;city_to_city_distances_matrix[39][60]=140;city_to_city_distances_matrix[39][61]=170;city_to_city_distances_matrix[39][62]=190;city_to_city_distances_matrix[39][63]=150;
city_to_city_distances_matrix[40][0]=240;city_to_city_distances_matrix[40][1]=250;city_to_city_distances_matrix[40][2]=230;city_to_city_distances_matrix[40][3]=270;city_to_city_distances_matrix[40][4]=245;city_to_city_distances_matrix[40][5]=235;city_to_city_distances_matrix[40][6]=280;city_to_city_distances_matrix[40][7]=290;city_to_city_distances_matrix[40][8]=190;city_to_city_distances_matrix[40][9]=180;city_to_city_distances_matrix[40][10]=250;city_to_city_distances_matrix[40][11]=230;city_to_city_distances_matrix[40][12]=220;city_to_city_distances_matrix[40][13]=180;city_to_city_distances_matrix[40][14]=300;city_to_city_distances_matrix[40][15]=140;city_to_city_distances_matrix[40][16]=130;city_to_city_distances_matrix[40][17]=170;city_to_city_distances_matrix[40][18]=200;city_to_city_distances_matrix[40][19]=190;city_to_city_distances_matrix[40][20]=150;city_to_city_distances_matrix[40][21]=280;city_to_city_distances_matrix[40][22]=300;city_to_city_distances_matrix[40][23]=310;city_to_city_distances_matrix[40][24]=140;city_to_city_distances_matrix[40][25]=160;city_to_city_distances_matrix[40][26]=120;city_to_city_distances_matrix[40][27]=160;city_to_city_distances_matrix[40][28]=160;city_to_city_distances_matrix[40][29]=180;city_to_city_distances_matrix[40][30]=110;city_to_city_distances_matrix[40][31]=120;city_to_city_distances_matrix[40][32]=110;city_to_city_distances_matrix[40][33]=130;city_to_city_distances_matrix[40][34]=150;city_to_city_distances_matrix[40][35]=40;city_to_city_distances_matrix[40][36]=110;city_to_city_distances_matrix[40][37]=120;city_to_city_distances_matrix[40][38]=70;city_to_city_distances_matrix[40][39]=40;city_to_city_distances_matrix[40][40]=0;city_to_city_distances_matrix[40][41]=60;city_to_city_distances_matrix[40][42]=120;city_to_city_distances_matrix[40][43]=160;city_to_city_distances_matrix[40][44]=120;city_to_city_distances_matrix[40][45]=100;city_to_city_distances_matrix[40][46]=80;city_to_city_distances_matrix[40][47]=140;city_to_city_distances_matrix[40][48]=110;city_to_city_distances_matrix[40][49]=90;city_to_city_distances_matrix[40][50]=80;city_to_city_distances_matrix[40][51]=170;city_to_city_distances_matrix[40][52]=210;city_to_city_distances_matrix[40][53]=200;city_to_city_distances_matrix[40][54]=260;city_to_city_distances_matrix[40][55]=240;city_to_city_distances_matrix[40][56]=230;city_to_city_distances_matrix[40][57]=240;city_to_city_distances_matrix[40][58]=310;city_to_city_distances_matrix[40][59]=330;city_to_city_distances_matrix[40][60]=150;city_to_city_distances_matrix[40][61]=180;city_to_city_distances_matrix[40][62]=200;city_to_city_distances_matrix[40][63]=160;
city_to_city_distances_matrix[41][0]=250;city_to_city_distances_matrix[41][1]=260;city_to_city_distances_matrix[41][2]=240;city_to_city_distances_matrix[41][3]=280;city_to_city_distances_matrix[41][4]=255;city_to_city_distances_matrix[41][5]=245;city_to_city_distances_matrix[41][6]=290;city_to_city_distances_matrix[41][7]=300;city_to_city_distances_matrix[41][8]=200;city_to_city_distances_matrix[41][9]=190;city_to_city_distances_matrix[41][10]=260;city_to_city_distances_matrix[41][11]=240;city_to_city_distances_matrix[41][12]=230;city_to_city_distances_matrix[41][13]=190;city_to_city_distances_matrix[41][14]=310;city_to_city_distances_matrix[41][15]=150;city_to_city_distances_matrix[41][16]=140;city_to_city_distances_matrix[41][17]=180;city_to_city_distances_matrix[41][18]=210;city_to_city_distances_matrix[41][19]=200;city_to_city_distances_matrix[41][20]=160;city_to_city_distances_matrix[41][21]=290;city_to_city_distances_matrix[41][22]=310;city_to_city_distances_matrix[41][23]=320;city_to_city_distances_matrix[41][24]=150;city_to_city_distances_matrix[41][25]=170;city_to_city_distances_matrix[41][26]=130;city_to_city_distances_matrix[41][27]=170;city_to_city_distances_matrix[41][28]=170;city_to_city_distances_matrix[41][29]=190;city_to_city_distances_matrix[41][30]=120;city_to_city_distances_matrix[41][31]=130;city_to_city_distances_matrix[41][32]=120;city_to_city_distances_matrix[41][33]=140;city_to_city_distances_matrix[41][34]=160;city_to_city_distances_matrix[41][35]=50;city_to_city_distances_matrix[41][36]=120;city_to_city_distances_matrix[41][37]=130;city_to_city_distances_matrix[41][38]=80;city_to_city_distances_matrix[41][39]=50;city_to_city_distances_matrix[41][40]=60;city_to_city_distances_matrix[41][41]=0;city_to_city_distances_matrix[41][42]=130;city_to_city_distances_matrix[41][43]=170;city_to_city_distances_matrix[41][44]=130;city_to_city_distances_matrix[41][45]=110;city_to_city_distances_matrix[41][46]=90;city_to_city_distances_matrix[41][47]=150;city_to_city_distances_matrix[41][48]=120;city_to_city_distances_matrix[41][49]=100;city_to_city_distances_matrix[41][50]=90;city_to_city_distances_matrix[41][51]=180;city_to_city_distances_matrix[41][52]=220;city_to_city_distances_matrix[41][53]=210;city_to_city_distances_matrix[41][54]=270;city_to_city_distances_matrix[41][55]=250;city_to_city_distances_matrix[41][56]=240;city_to_city_distances_matrix[41][57]=250;city_to_city_distances_matrix[41][58]=320;city_to_city_distances_matrix[41][59]=340;city_to_city_distances_matrix[41][60]=160;city_to_city_distances_matrix[41][61]=190;city_to_city_distances_matrix[41][62]=210;city_to_city_distances_matrix[41][63]=170;
city_to_city_distances_matrix[42][0]=270;city_to_city_distances_matrix[42][1]=280;city_to_city_distances_matrix[42][2]=260;city_to_city_distances_matrix[42][3]=300;city_to_city_distances_matrix[42][4]=275;city_to_city_distances_matrix[42][5]=265;city_to_city_distances_matrix[42][6]=310;city_to_city_distances_matrix[42][7]=320;city_to_city_distances_matrix[42][8]=230;city_to_city_distances_matrix[42][9]=220;city_to_city_distances_matrix[42][10]=290;city_to_city_distances_matrix[42][11]=270;city_to_city_distances_matrix[42][12]=260;city_to_city_distances_matrix[42][13]=220;city_to_city_distances_matrix[42][14]=340;city_to_city_distances_matrix[42][15]=170;city_to_city_distances_matrix[42][16]=160;city_to_city_distances_matrix[42][17]=200;city_to_city_distances_matrix[42][18]=230;city_to_city_distances_matrix[42][19]=220;city_to_city_distances_matrix[42][20]=180;city_to_city_distances_matrix[42][21]=310;city_to_city_distances_matrix[42][22]=330;city_to_city_distances_matrix[42][23]=340;city_to_city_distances_matrix[42][24]=170;city_to_city_distances_matrix[42][25]=200;city_to_city_distances_matrix[42][26]=150;city_to_city_distances_matrix[42][27]=200;city_to_city_distances_matrix[42][28]=200;city_to_city_distances_matrix[42][29]=220;city_to_city_distances_matrix[42][30]=150;city_to_city_distances_matrix[42][31]=160;city_to_city_distances_matrix[42][32]=150;city_to_city_distances_matrix[42][33]=170;city_to_city_distances_matrix[42][34]=190;city_to_city_distances_matrix[42][35]=100;city_to_city_distances_matrix[42][36]=150;city_to_city_distances_matrix[42][37]=160;city_to_city_distances_matrix[42][38]=130;city_to_city_distances_matrix[42][39]=110;city_to_city_distances_matrix[42][40]=120;city_to_city_distances_matrix[42][41]=130;city_to_city_distances_matrix[42][42]=0;city_to_city_distances_matrix[42][43]=180;city_to_city_distances_matrix[42][44]=140;city_to_city_distances_matrix[42][45]=120;city_to_city_distances_matrix[42][46]=100;city_to_city_distances_matrix[42][47]=160;city_to_city_distances_matrix[42][48]=130;city_to_city_distances_matrix[42][49]=110;city_to_city_distances_matrix[42][50]=100;city_to_city_distances_matrix[42][51]=190;city_to_city_distances_matrix[42][52]=230;city_to_city_distances_matrix[42][53]=220;city_to_city_distances_matrix[42][54]=280;city_to_city_distances_matrix[42][55]=260;city_to_city_distances_matrix[42][56]=250;city_to_city_distances_matrix[42][57]=260;city_to_city_distances_matrix[42][58]=330;city_to_city_distances_matrix[42][59]=350;city_to_city_distances_matrix[42][60]=170;city_to_city_distances_matrix[42][61]=200;city_to_city_distances_matrix[42][62]=220;city_to_city_distances_matrix[42][63]=180;
city_to_city_distances_matrix[43][0]=280;city_to_city_distances_matrix[43][1]=290;city_to_city_distances_matrix[43][2]=270;city_to_city_distances_matrix[43][3]=310;city_to_city_distances_matrix[43][4]=285;city_to_city_distances_matrix[43][5]=275;city_to_city_distances_matrix[43][6]=320;city_to_city_distances_matrix[43][7]=330;city_to_city_distances_matrix[43][8]=240;city_to_city_distances_matrix[43][9]=230;city_to_city_distances_matrix[43][10]=300;city_to_city_distances_matrix[43][11]=280;city_to_city_distances_matrix[43][12]=270;city_to_city_distances_matrix[43][13]=230;city_to_city_distances_matrix[43][14]=350;city_to_city_distances_matrix[43][15]=180;city_to_city_distances_matrix[43][16]=170;city_to_city_distances_matrix[43][17]=210;city_to_city_distances_matrix[43][18]=240;city_to_city_distances_matrix[43][19]=230;city_to_city_distances_matrix[43][20]=190;city_to_city_distances_matrix[43][21]=320;city_to_city_distances_matrix[43][22]=340;city_to_city_distances_matrix[43][23]=350;city_to_city_distances_matrix[43][24]=180;city_to_city_distances_matrix[43][25]=160;city_to_city_distances_matrix[43][26]=190;city_to_city_distances_matrix[43][27]=240;city_to_city_distances_matrix[43][28]=140;city_to_city_distances_matrix[43][29]=180;city_to_city_distances_matrix[43][30]=170;city_to_city_distances_matrix[43][31]=180;city_to_city_distances_matrix[43][32]=170;city_to_city_distances_matrix[43][33]=190;city_to_city_distances_matrix[43][34]=210;city_to_city_distances_matrix[43][35]=140;city_to_city_distances_matrix[43][36]=150;city_to_city_distances_matrix[43][37]=160;city_to_city_distances_matrix[43][38]=150;city_to_city_distances_matrix[43][39]=150;city_to_city_distances_matrix[43][40]=160;city_to_city_distances_matrix[43][41]=170;city_to_city_distances_matrix[43][42]=180;city_to_city_distances_matrix[43][43]=0;city_to_city_distances_matrix[43][44]=70;city_to_city_distances_matrix[43][45]=50;city_to_city_distances_matrix[43][46]=40;city_to_city_distances_matrix[43][47]=90;city_to_city_distances_matrix[43][48]=120;city_to_city_distances_matrix[43][49]=150;city_to_city_distances_matrix[43][50]=140;city_to_city_distances_matrix[43][51]=200;city_to_city_distances_matrix[43][52]=240;city_to_city_distances_matrix[43][53]=230;city_to_city_distances_matrix[43][54]=290;city_to_city_distances_matrix[43][55]=270;city_to_city_distances_matrix[43][56]=260;city_to_city_distances_matrix[43][57]=270;city_to_city_distances_matrix[43][58]=340;city_to_city_distances_matrix[43][59]=360;city_to_city_distances_matrix[43][60]=190;city_to_city_distances_matrix[43][61]=220;city_to_city_distances_matrix[43][62]=240;city_to_city_distances_matrix[43][63]=200;
city_to_city_distances_matrix[44][0]=220;city_to_city_distances_matrix[44][1]=230;city_to_city_distances_matrix[44][2]=210;city_to_city_distances_matrix[44][3]=250;city_to_city_distances_matrix[44][4]=225;city_to_city_distances_matrix[44][5]=215;city_to_city_distances_matrix[44][6]=260;city_to_city_distances_matrix[44][7]=270;city_to_city_distances_matrix[44][8]=200;city_to_city_distances_matrix[44][9]=190;city_to_city_distances_matrix[44][10]=260;city_to_city_distances_matrix[44][11]=240;city_to_city_distances_matrix[44][12]=230;city_to_city_distances_matrix[44][13]=190;city_to_city_distances_matrix[44][14]=310;city_to_city_distances_matrix[44][15]=140;city_to_city_distances_matrix[44][16]=130;city_to_city_distances_matrix[44][17]=170;city_to_city_distances_matrix[44][18]=200;city_to_city_distances_matrix[44][19]=190;city_to_city_distances_matrix[44][20]=150;city_to_city_distances_matrix[44][21]=280;city_to_city_distances_matrix[44][22]=300;city_to_city_distances_matrix[44][23]=310;city_to_city_distances_matrix[44][24]=120;city_to_city_distances_matrix[44][25]=120;city_to_city_distances_matrix[44][26]=150;city_to_city_distances_matrix[44][27]=200;city_to_city_distances_matrix[44][28]=100;city_to_city_distances_matrix[44][29]=140;city_to_city_distances_matrix[44][30]=130;city_to_city_distances_matrix[44][31]=140;city_to_city_distances_matrix[44][32]=130;city_to_city_distances_matrix[44][33]=150;city_to_city_distances_matrix[44][34]=170;city_to_city_distances_matrix[44][35]=100;city_to_city_distances_matrix[44][36]=110;city_to_city_distances_matrix[44][37]=120;city_to_city_distances_matrix[44][38]=110;city_to_city_distances_matrix[44][39]=110;city_to_city_distances_matrix[44][40]=120;city_to_city_distances_matrix[44][41]=130;city_to_city_distances_matrix[44][42]=140;city_to_city_distances_matrix[44][43]=70;city_to_city_distances_matrix[44][44]=0;city_to_city_distances_matrix[44][45]=60;city_to_city_distances_matrix[44][46]=50;city_to_city_distances_matrix[44][47]=100;city_to_city_distances_matrix[44][48]=130;city_to_city_distances_matrix[44][49]=160;city_to_city_distances_matrix[44][50]=150;city_to_city_distances_matrix[44][51]=210;city_to_city_distances_matrix[44][52]=250;city_to_city_distances_matrix[44][53]=240;city_to_city_distances_matrix[44][54]=300;city_to_city_distances_matrix[44][55]=280;city_to_city_distances_matrix[44][56]=270;city_to_city_distances_matrix[44][57]=280;city_to_city_distances_matrix[44][58]=350;city_to_city_distances_matrix[44][59]=370;city_to_city_distances_matrix[44][60]=200;city_to_city_distances_matrix[44][61]=230;city_to_city_distances_matrix[44][62]=250;city_to_city_distances_matrix[44][63]=210;
city_to_city_distances_matrix[45][0]=240;city_to_city_distances_matrix[45][1]=250;city_to_city_distances_matrix[45][2]=230;city_to_city_distances_matrix[45][3]=270;city_to_city_distances_matrix[45][4]=245;city_to_city_distances_matrix[45][5]=235;city_to_city_distances_matrix[45][6]=280;city_to_city_distances_matrix[45][7]=290;city_to_city_distances_matrix[45][8]=180;city_to_city_distances_matrix[45][9]=170;city_to_city_distances_matrix[45][10]=240;city_to_city_distances_matrix[45][11]=220;city_to_city_distances_matrix[45][12]=210;city_to_city_distances_matrix[45][13]=170;city_to_city_distances_matrix[45][14]=290;city_to_city_distances_matrix[45][15]=130;city_to_city_distances_matrix[45][16]=120;city_to_city_distances_matrix[45][17]=160;city_to_city_distances_matrix[45][18]=190;city_to_city_distances_matrix[45][19]=180;city_to_city_distances_matrix[45][20]=140;city_to_city_distances_matrix[45][21]=270;city_to_city_distances_matrix[45][22]=290;city_to_city_distances_matrix[45][23]=300;city_to_city_distances_matrix[45][24]=100;city_to_city_distances_matrix[45][25]=100;city_to_city_distances_matrix[45][26]=130;city_to_city_distances_matrix[45][27]=180;city_to_city_distances_matrix[45][28]=80;city_to_city_distances_matrix[45][29]=120;city_to_city_distances_matrix[45][30]=110;city_to_city_distances_matrix[45][31]=120;city_to_city_distances_matrix[45][32]=110;city_to_city_distances_matrix[45][33]=130;city_to_city_distances_matrix[45][34]=150;city_to_city_distances_matrix[45][35]=80;city_to_city_distances_matrix[45][36]=90;city_to_city_distances_matrix[45][37]=100;city_to_city_distances_matrix[45][38]=90;city_to_city_distances_matrix[45][39]=90;city_to_city_distances_matrix[45][40]=100;city_to_city_distances_matrix[45][41]=110;city_to_city_distances_matrix[45][42]=120;city_to_city_distances_matrix[45][43]=50;city_to_city_distances_matrix[45][44]=60;city_to_city_distances_matrix[45][45]=0;city_to_city_distances_matrix[45][46]=70;city_to_city_distances_matrix[45][47]=110;city_to_city_distances_matrix[45][48]=140;city_to_city_distances_matrix[45][49]=170;city_to_city_distances_matrix[45][50]=160;city_to_city_distances_matrix[45][51]=220;city_to_city_distances_matrix[45][52]=260;city_to_city_distances_matrix[45][53]=250;city_to_city_distances_matrix[45][54]=310;city_to_city_distances_matrix[45][55]=290;city_to_city_distances_matrix[45][56]=280;city_to_city_distances_matrix[45][57]=290;city_to_city_distances_matrix[45][58]=360;city_to_city_distances_matrix[45][59]=380;city_to_city_distances_matrix[45][60]=210;city_to_city_distances_matrix[45][61]=240;city_to_city_distances_matrix[45][62]=260;city_to_city_distances_matrix[45][63]=220;
city_to_city_distances_matrix[46][0]=260;city_to_city_distances_matrix[46][1]=270;city_to_city_distances_matrix[46][2]=250;city_to_city_distances_matrix[46][3]=290;city_to_city_distances_matrix[46][4]=265;city_to_city_distances_matrix[46][5]=255;city_to_city_distances_matrix[46][6]=300;city_to_city_distances_matrix[46][7]=310;city_to_city_distances_matrix[46][8]=220;city_to_city_distances_matrix[46][9]=210;city_to_city_distances_matrix[46][10]=280;city_to_city_distances_matrix[46][11]=260;city_to_city_distances_matrix[46][12]=250;city_to_city_distances_matrix[46][13]=210;city_to_city_distances_matrix[46][14]=330;city_to_city_distances_matrix[46][15]=150;city_to_city_distances_matrix[46][16]=140;city_to_city_distances_matrix[46][17]=180;city_to_city_distances_matrix[46][18]=210;city_to_city_distances_matrix[46][19]=200;city_to_city_distances_matrix[46][20]=160;city_to_city_distances_matrix[46][21]=300;city_to_city_distances_matrix[46][22]=320;city_to_city_distances_matrix[46][23]=330;city_to_city_distances_matrix[46][24]=130;city_to_city_distances_matrix[46][25]=80;city_to_city_distances_matrix[46][26]=110;city_to_city_distances_matrix[46][27]=160;city_to_city_distances_matrix[46][28]=60;city_to_city_distances_matrix[46][29]=100;city_to_city_distances_matrix[46][30]=90;city_to_city_distances_matrix[46][31]=100;city_to_city_distances_matrix[46][32]=90;city_to_city_distances_matrix[46][33]=110;city_to_city_distances_matrix[46][34]=130;city_to_city_distances_matrix[46][35]=60;city_to_city_distances_matrix[46][36]=70;city_to_city_distances_matrix[46][37]=80;city_to_city_distances_matrix[46][38]=70;city_to_city_distances_matrix[46][39]=70;city_to_city_distances_matrix[46][40]=80;city_to_city_distances_matrix[46][41]=90;city_to_city_distances_matrix[46][42]=100;city_to_city_distances_matrix[46][43]=40;city_to_city_distances_matrix[46][44]=50;city_to_city_distances_matrix[46][45]=70;city_to_city_distances_matrix[46][46]=0;city_to_city_distances_matrix[46][47]=90;city_to_city_distances_matrix[46][48]=120;city_to_city_distances_matrix[46][49]=150;city_to_city_distances_matrix[46][50]=140;city_to_city_distances_matrix[46][51]=200;city_to_city_distances_matrix[46][52]=240;city_to_city_distances_matrix[46][53]=230;city_to_city_distances_matrix[46][54]=290;city_to_city_distances_matrix[46][55]=270;city_to_city_distances_matrix[46][56]=260;city_to_city_distances_matrix[46][57]=270;city_to_city_distances_matrix[46][58]=340;city_to_city_distances_matrix[46][59]=360;city_to_city_distances_matrix[46][60]=190;city_to_city_distances_matrix[46][61]=220;city_to_city_distances_matrix[46][62]=240;city_to_city_distances_matrix[46][63]=200;
city_to_city_distances_matrix[47][0]=280;city_to_city_distances_matrix[47][1]=290;city_to_city_distances_matrix[47][2]=270;city_to_city_distances_matrix[47][3]=310;city_to_city_distances_matrix[47][4]=285;city_to_city_distances_matrix[47][5]=275;city_to_city_distances_matrix[47][6]=320;city_to_city_distances_matrix[47][7]=330;city_to_city_distances_matrix[47][8]=240;city_to_city_distances_matrix[47][9]=230;city_to_city_distances_matrix[47][10]=300;city_to_city_distances_matrix[47][11]=280;city_to_city_distances_matrix[47][12]=270;city_to_city_distances_matrix[47][13]=230;city_to_city_distances_matrix[47][14]=350;city_to_city_distances_matrix[47][15]=170;city_to_city_distances_matrix[47][16]=160;city_to_city_distances_matrix[47][17]=200;city_to_city_distances_matrix[47][18]=230;city_to_city_distances_matrix[47][19]=220;city_to_city_distances_matrix[47][20]=180;city_to_city_distances_matrix[47][21]=320;city_to_city_distances_matrix[47][22]=340;city_to_city_distances_matrix[47][23]=350;city_to_city_distances_matrix[47][24]=140;city_to_city_distances_matrix[47][25]=140;city_to_city_distances_matrix[47][26]=170;city_to_city_distances_matrix[47][27]=220;city_to_city_distances_matrix[47][28]=120;city_to_city_distances_matrix[47][29]=160;city_to_city_distances_matrix[47][30]=150;city_to_city_distances_matrix[47][31]=160;city_to_city_distances_matrix[47][32]=150;city_to_city_distances_matrix[47][33]=170;city_to_city_distances_matrix[47][34]=190;city_to_city_distances_matrix[47][35]=120;city_to_city_distances_matrix[47][36]=130;city_to_city_distances_matrix[47][37]=140;city_to_city_distances_matrix[47][38]=130;city_to_city_distances_matrix[47][39]=130;city_to_city_distances_matrix[47][40]=140;city_to_city_distances_matrix[47][41]=150;city_to_city_distances_matrix[47][42]=160;city_to_city_distances_matrix[47][43]=90;city_to_city_distances_matrix[47][44]=100;city_to_city_distances_matrix[47][45]=110;city_to_city_distances_matrix[47][46]=90;city_to_city_distances_matrix[47][47]=0;city_to_city_distances_matrix[47][48]=130;city_to_city_distances_matrix[47][49]=160;city_to_city_distances_matrix[47][50]=150;city_to_city_distances_matrix[47][51]=210;city_to_city_distances_matrix[47][52]=250;city_to_city_distances_matrix[47][53]=240;city_to_city_distances_matrix[47][54]=300;city_to_city_distances_matrix[47][55]=280;city_to_city_distances_matrix[47][56]=270;city_to_city_distances_matrix[47][57]=280;city_to_city_distances_matrix[47][58]=350;city_to_city_distances_matrix[47][59]=370;city_to_city_distances_matrix[47][60]=200;city_to_city_distances_matrix[47][61]=230;city_to_city_distances_matrix[47][62]=250;city_to_city_distances_matrix[47][63]=210;
city_to_city_distances_matrix[48][0]=300;city_to_city_distances_matrix[48][1]=310;city_to_city_distances_matrix[48][2]=290;city_to_city_distances_matrix[48][3]=330;city_to_city_distances_matrix[48][4]=305;city_to_city_distances_matrix[48][5]=295;city_to_city_distances_matrix[48][6]=340;city_to_city_distances_matrix[48][7]=350;city_to_city_distances_matrix[48][8]=250;city_to_city_distances_matrix[48][9]=240;city_to_city_distances_matrix[48][10]=310;city_to_city_distances_matrix[48][11]=290;city_to_city_distances_matrix[48][12]=280;city_to_city_distances_matrix[48][13]=240;city_to_city_distances_matrix[48][14]=360;city_to_city_distances_matrix[48][15]=180;city_to_city_distances_matrix[48][16]=170;city_to_city_distances_matrix[48][17]=210;city_to_city_distances_matrix[48][18]=240;city_to_city_distances_matrix[48][19]=230;city_to_city_distances_matrix[48][20]=190;city_to_city_distances_matrix[48][21]=330;city_to_city_distances_matrix[48][22]=350;city_to_city_distances_matrix[48][23]=360;city_to_city_distances_matrix[48][24]=150;city_to_city_distances_matrix[48][25]=130;city_to_city_distances_matrix[48][26]=160;city_to_city_distances_matrix[48][27]=210;city_to_city_distances_matrix[48][28]=150;city_to_city_distances_matrix[48][29]=170;city_to_city_distances_matrix[48][30]=120;city_to_city_distances_matrix[48][31]=130;city_to_city_distances_matrix[48][32]=120;city_to_city_distances_matrix[48][33]=140;city_to_city_distances_matrix[48][34]=160;city_to_city_distances_matrix[48][35]=90;city_to_city_distances_matrix[48][36]=100;city_to_city_distances_matrix[48][37]=110;city_to_city_distances_matrix[48][38]=100;city_to_city_distances_matrix[48][39]=100;city_to_city_distances_matrix[48][40]=110;city_to_city_distances_matrix[48][41]=120;city_to_city_distances_matrix[48][42]=130;city_to_city_distances_matrix[48][43]=120;city_to_city_distances_matrix[48][44]=130;city_to_city_distances_matrix[48][45]=140;city_to_city_distances_matrix[48][46]=120;city_to_city_distances_matrix[48][47]=130;city_to_city_distances_matrix[48][48]=0;city_to_city_distances_matrix[48][49]=150;city_to_city_distances_matrix[48][50]=140;city_to_city_distances_matrix[48][51]=200;city_to_city_distances_matrix[48][52]=240;city_to_city_distances_matrix[48][53]=230;city_to_city_distances_matrix[48][54]=290;city_to_city_distances_matrix[48][55]=270;city_to_city_distances_matrix[48][56]=260;city_to_city_distances_matrix[48][57]=270;city_to_city_distances_matrix[48][58]=340;city_to_city_distances_matrix[48][59]=360;city_to_city_distances_matrix[48][60]=190;city_to_city_distances_matrix[48][61]=220;city_to_city_distances_matrix[48][62]=240;city_to_city_distances_matrix[48][63]=200;
city_to_city_distances_matrix[49][0]=270;city_to_city_distances_matrix[49][1]=280;city_to_city_distances_matrix[49][2]=260;city_to_city_distances_matrix[49][3]=300;city_to_city_distances_matrix[49][4]=275;city_to_city_distances_matrix[49][5]=265;city_to_city_distances_matrix[49][6]=310;city_to_city_distances_matrix[49][7]=320;city_to_city_distances_matrix[49][8]=220;city_to_city_distances_matrix[49][9]=210;city_to_city_distances_matrix[49][10]=280;city_to_city_distances_matrix[49][11]=260;city_to_city_distances_matrix[49][12]=250;city_to_city_distances_matrix[49][13]=210;city_to_city_distances_matrix[49][14]=330;city_to_city_distances_matrix[49][15]=150;city_to_city_distances_matrix[49][16]=140;city_to_city_distances_matrix[49][17]=180;city_to_city_distances_matrix[49][18]=210;city_to_city_distances_matrix[49][19]=200;city_to_city_distances_matrix[49][20]=160;city_to_city_distances_matrix[49][21]=300;city_to_city_distances_matrix[49][22]=320;city_to_city_distances_matrix[49][23]=330;city_to_city_distances_matrix[49][24]=120;city_to_city_distances_matrix[49][25]=90;city_to_city_distances_matrix[49][26]=120;city_to_city_distances_matrix[49][27]=170;city_to_city_distances_matrix[49][28]=120;city_to_city_distances_matrix[49][29]=130;city_to_city_distances_matrix[49][30]=80;city_to_city_distances_matrix[49][31]=90;city_to_city_distances_matrix[49][32]=80;city_to_city_distances_matrix[49][33]=100;city_to_city_distances_matrix[49][34]=120;city_to_city_distances_matrix[49][35]=70;city_to_city_distances_matrix[49][36]=80;city_to_city_distances_matrix[49][37]=90;city_to_city_distances_matrix[49][38]=80;city_to_city_distances_matrix[49][39]=80;city_to_city_distances_matrix[49][40]=90;city_to_city_distances_matrix[49][41]=100;city_to_city_distances_matrix[49][42]=110;city_to_city_distances_matrix[49][43]=150;city_to_city_distances_matrix[49][44]=160;city_to_city_distances_matrix[49][45]=170;city_to_city_distances_matrix[49][46]=150;city_to_city_distances_matrix[49][47]=160;city_to_city_distances_matrix[49][48]=150;city_to_city_distances_matrix[49][49]=0;city_to_city_distances_matrix[49][50]=50;city_to_city_distances_matrix[49][51]=140;city_to_city_distances_matrix[49][52]=180;city_to_city_distances_matrix[49][53]=170;city_to_city_distances_matrix[49][54]=230;city_to_city_distances_matrix[49][55]=210;city_to_city_distances_matrix[49][56]=200;city_to_city_distances_matrix[49][57]=210;city_to_city_distances_matrix[49][58]=280;city_to_city_distances_matrix[49][59]=300;city_to_city_distances_matrix[49][60]=120;city_to_city_distances_matrix[49][61]=150;city_to_city_distances_matrix[49][62]=170;city_to_city_distances_matrix[49][63]=130;
city_to_city_distances_matrix[50][0]=260;city_to_city_distances_matrix[50][1]=270;city_to_city_distances_matrix[50][2]=250;city_to_city_distances_matrix[50][3]=290;city_to_city_distances_matrix[50][4]=265;city_to_city_distances_matrix[50][5]=255;city_to_city_distances_matrix[50][6]=300;city_to_city_distances_matrix[50][7]=310;city_to_city_distances_matrix[50][8]=210;city_to_city_distances_matrix[50][9]=200;city_to_city_distances_matrix[50][10]=270;city_to_city_distances_matrix[50][11]=250;city_to_city_distances_matrix[50][12]=240;city_to_city_distances_matrix[50][13]=200;city_to_city_distances_matrix[50][14]=320;city_to_city_distances_matrix[50][15]=140;city_to_city_distances_matrix[50][16]=130;city_to_city_distances_matrix[50][17]=170;city_to_city_distances_matrix[50][18]=200;city_to_city_distances_matrix[50][19]=190;city_to_city_distances_matrix[50][20]=150;city_to_city_distances_matrix[50][21]=290;city_to_city_distances_matrix[50][22]=310;city_to_city_distances_matrix[50][23]=320;city_to_city_distances_matrix[50][24]=110;city_to_city_distances_matrix[50][25]=80;city_to_city_distances_matrix[50][26]=110;city_to_city_distances_matrix[50][27]=160;city_to_city_distances_matrix[50][28]=110;city_to_city_distances_matrix[50][29]=120;city_to_city_distances_matrix[50][30]=70;city_to_city_distances_matrix[50][31]=80;city_to_city_distances_matrix[50][32]=70;city_to_city_distances_matrix[50][33]=90;city_to_city_distances_matrix[50][34]=110;city_to_city_distances_matrix[50][35]=60;city_to_city_distances_matrix[50][36]=70;city_to_city_distances_matrix[50][37]=80;city_to_city_distances_matrix[50][38]=70;city_to_city_distances_matrix[50][39]=70;city_to_city_distances_matrix[50][40]=80;city_to_city_distances_matrix[50][41]=90;city_to_city_distances_matrix[50][42]=100;city_to_city_distances_matrix[50][43]=140;city_to_city_distances_matrix[50][44]=150;city_to_city_distances_matrix[50][45]=160;city_to_city_distances_matrix[50][46]=140;city_to_city_distances_matrix[50][47]=150;city_to_city_distances_matrix[50][48]=140;city_to_city_distances_matrix[50][49]=50;city_to_city_distances_matrix[50][50]=0;city_to_city_distances_matrix[50][51]=130;city_to_city_distances_matrix[50][52]=170;city_to_city_distances_matrix[50][53]=160;city_to_city_distances_matrix[50][54]=220;city_to_city_distances_matrix[50][55]=200;city_to_city_distances_matrix[50][56]=190;city_to_city_distances_matrix[50][57]=200;city_to_city_distances_matrix[50][58]=270;city_to_city_distances_matrix[50][59]=290;city_to_city_distances_matrix[50][60]=110;city_to_city_distances_matrix[50][61]=140;city_to_city_distances_matrix[50][62]=160;city_to_city_distances_matrix[50][63]=120;
city_to_city_distances_matrix[51][0]=300;city_to_city_distances_matrix[51][1]=310;city_to_city_distances_matrix[51][2]=290;city_to_city_distances_matrix[51][3]=330;city_to_city_distances_matrix[51][4]=305;city_to_city_distances_matrix[51][5]=295;city_to_city_distances_matrix[51][6]=340;city_to_city_distances_matrix[51][7]=350;city_to_city_distances_matrix[51][8]=260;city_to_city_distances_matrix[51][9]=250;city_to_city_distances_matrix[51][10]=320;city_to_city_distances_matrix[51][11]=300;city_to_city_distances_matrix[51][12]=290;city_to_city_distances_matrix[51][13]=250;city_to_city_distances_matrix[51][14]=370;city_to_city_distances_matrix[51][15]=190;city_to_city_distances_matrix[51][16]=180;city_to_city_distances_matrix[51][17]=220;city_to_city_distances_matrix[51][18]=250;city_to_city_distances_matrix[51][19]=240;city_to_city_distances_matrix[51][20]=200;city_to_city_distances_matrix[51][21]=330;city_to_city_distances_matrix[51][22]=350;city_to_city_distances_matrix[51][23]=360;city_to_city_distances_matrix[51][24]=170;city_to_city_distances_matrix[51][25]=170;city_to_city_distances_matrix[51][26]=200;city_to_city_distances_matrix[51][27]=250;city_to_city_distances_matrix[51][28]=200;city_to_city_distances_matrix[51][29]=210;city_to_city_distances_matrix[51][30]=160;city_to_city_distances_matrix[51][31]=170;city_to_city_distances_matrix[51][32]=160;city_to_city_distances_matrix[51][33]=180;city_to_city_distances_matrix[51][34]=200;city_to_city_distances_matrix[51][35]=150;city_to_city_distances_matrix[51][36]=160;city_to_city_distances_matrix[51][37]=170;city_to_city_distances_matrix[51][38]=160;city_to_city_distances_matrix[51][39]=160;city_to_city_distances_matrix[51][40]=170;city_to_city_distances_matrix[51][41]=180;city_to_city_distances_matrix[51][42]=190;city_to_city_distances_matrix[51][43]=200;city_to_city_distances_matrix[51][44]=210;city_to_city_distances_matrix[51][45]=220;city_to_city_distances_matrix[51][46]=200;city_to_city_distances_matrix[51][47]=210;city_to_city_distances_matrix[51][48]=200;city_to_city_distances_matrix[51][49]=140;city_to_city_distances_matrix[51][50]=130;city_to_city_distances_matrix[51][51]=0;city_to_city_distances_matrix[51][52]=90;city_to_city_distances_matrix[51][53]=80;city_to_city_distances_matrix[51][54]=140;city_to_city_distances_matrix[51][55]=120;city_to_city_distances_matrix[51][56]=110;city_to_city_distances_matrix[51][57]=120;city_to_city_distances_matrix[51][58]=190;city_to_city_distances_matrix[51][59]=210;city_to_city_distances_matrix[51][60]=170;city_to_city_distances_matrix[51][61]=200;city_to_city_distances_matrix[51][62]=220;city_to_city_distances_matrix[51][63]=180;
city_to_city_distances_matrix[52][0]=320;city_to_city_distances_matrix[52][1]=330;city_to_city_distances_matrix[52][2]=310;city_to_city_distances_matrix[52][3]=350;city_to_city_distances_matrix[52][4]=325;city_to_city_distances_matrix[52][5]=315;city_to_city_distances_matrix[52][6]=360;city_to_city_distances_matrix[52][7]=370;city_to_city_distances_matrix[52][8]=280;city_to_city_distances_matrix[52][9]=270;city_to_city_distances_matrix[52][10]=340;city_to_city_distances_matrix[52][11]=320;city_to_city_distances_matrix[52][12]=310;city_to_city_distances_matrix[52][13]=270;city_to_city_distances_matrix[52][14]=390;city_to_city_distances_matrix[52][15]=210;city_to_city_distances_matrix[52][16]=200;city_to_city_distances_matrix[52][17]=240;city_to_city_distances_matrix[52][18]=270;city_to_city_distances_matrix[52][19]=260;city_to_city_distances_matrix[52][20]=220;city_to_city_distances_matrix[52][21]=350;city_to_city_distances_matrix[52][22]=370;city_to_city_distances_matrix[52][23]=380;city_to_city_distances_matrix[52][24]=190;city_to_city_distances_matrix[52][25]=210;city_to_city_distances_matrix[52][26]=240;city_to_city_distances_matrix[52][27]=290;city_to_city_distances_matrix[52][28]=240;city_to_city_distances_matrix[52][29]=250;city_to_city_distances_matrix[52][30]=200;city_to_city_distances_matrix[52][31]=210;city_to_city_distances_matrix[52][32]=200;city_to_city_distances_matrix[52][33]=220;city_to_city_distances_matrix[52][34]=240;city_to_city_distances_matrix[52][35]=190;city_to_city_distances_matrix[52][36]=200;city_to_city_distances_matrix[52][37]=210;city_to_city_distances_matrix[52][38]=200;city_to_city_distances_matrix[52][39]=200;city_to_city_distances_matrix[52][40]=210;city_to_city_distances_matrix[52][41]=220;city_to_city_distances_matrix[52][42]=230;city_to_city_distances_matrix[52][43]=240;city_to_city_distances_matrix[52][44]=250;city_to_city_distances_matrix[52][45]=260;city_to_city_distances_matrix[52][46]=240;city_to_city_distances_matrix[52][47]=250;city_to_city_distances_matrix[52][48]=240;city_to_city_distances_matrix[52][49]=180;city_to_city_distances_matrix[52][50]=170;city_to_city_distances_matrix[52][51]=90;city_to_city_distances_matrix[52][52]=0;city_to_city_distances_matrix[52][53]=50;city_to_city_distances_matrix[52][54]=110;city_to_city_distances_matrix[52][55]=90;city_to_city_distances_matrix[52][56]=80;city_to_city_distances_matrix[52][57]=90;city_to_city_distances_matrix[52][58]=160;city_to_city_distances_matrix[52][59]=180;city_to_city_distances_matrix[52][60]=190;city_to_city_distances_matrix[52][61]=220;city_to_city_distances_matrix[52][62]=240;city_to_city_distances_matrix[52][63]=200;
city_to_city_distances_matrix[53][0]=340;city_to_city_distances_matrix[53][1]=350;city_to_city_distances_matrix[53][2]=330;city_to_city_distances_matrix[53][3]=370;city_to_city_distances_matrix[53][4]=345;city_to_city_distances_matrix[53][5]=335;city_to_city_distances_matrix[53][6]=380;city_to_city_distances_matrix[53][7]=390;city_to_city_distances_matrix[53][8]=300;city_to_city_distances_matrix[53][9]=290;city_to_city_distances_matrix[53][10]=360;city_to_city_distances_matrix[53][11]=340;city_to_city_distances_matrix[53][12]=330;city_to_city_distances_matrix[53][13]=290;city_to_city_distances_matrix[53][14]=410;city_to_city_distances_matrix[53][15]=230;city_to_city_distances_matrix[53][16]=220;city_to_city_distances_matrix[53][17]=260;city_to_city_distances_matrix[53][18]=290;city_to_city_distances_matrix[53][19]=280;city_to_city_distances_matrix[53][20]=240;city_to_city_distances_matrix[53][21]=370;city_to_city_distances_matrix[53][22]=390;city_to_city_distances_matrix[53][23]=400;city_to_city_distances_matrix[53][24]=210;city_to_city_distances_matrix[53][25]=200;city_to_city_distances_matrix[53][26]=230;city_to_city_distances_matrix[53][27]=280;city_to_city_distances_matrix[53][28]=230;city_to_city_distances_matrix[53][29]=240;city_to_city_distances_matrix[53][30]=190;city_to_city_distances_matrix[53][31]=200;city_to_city_distances_matrix[53][32]=190;city_to_city_distances_matrix[53][33]=210;city_to_city_distances_matrix[53][34]=230;city_to_city_distances_matrix[53][35]=180;city_to_city_distances_matrix[53][36]=190;city_to_city_distances_matrix[53][37]=200;city_to_city_distances_matrix[53][38]=190;city_to_city_distances_matrix[53][39]=190;city_to_city_distances_matrix[53][40]=200;city_to_city_distances_matrix[53][41]=210;city_to_city_distances_matrix[53][42]=220;city_to_city_distances_matrix[53][43]=230;city_to_city_distances_matrix[53][44]=240;city_to_city_distances_matrix[53][45]=250;city_to_city_distances_matrix[53][46]=230;city_to_city_distances_matrix[53][47]=240;city_to_city_distances_matrix[53][48]=230;city_to_city_distances_matrix[53][49]=170;city_to_city_distances_matrix[53][50]=160;city_to_city_distances_matrix[53][51]=80;city_to_city_distances_matrix[53][52]=50;city_to_city_distances_matrix[53][53]=0;city_to_city_distances_matrix[53][54]=70;city_to_city_distances_matrix[53][55]=50;city_to_city_distances_matrix[53][56]=40;city_to_city_distances_matrix[53][57]=50;city_to_city_distances_matrix[53][58]=120;city_to_city_distances_matrix[53][59]=140;city_to_city_distances_matrix[53][60]=200;city_to_city_distances_matrix[53][61]=230;city_to_city_distances_matrix[53][62]=250;city_to_city_distances_matrix[53][63]=210;
city_to_city_distances_matrix[54][0]=360;city_to_city_distances_matrix[54][1]=370;city_to_city_distances_matrix[54][2]=350;city_to_city_distances_matrix[54][3]=390;city_to_city_distances_matrix[54][4]=365;city_to_city_distances_matrix[54][5]=355;city_to_city_distances_matrix[54][6]=400;city_to_city_distances_matrix[54][7]=410;city_to_city_distances_matrix[54][8]=320;city_to_city_distances_matrix[54][9]=310;city_to_city_distances_matrix[54][10]=380;city_to_city_distances_matrix[54][11]=360;city_to_city_distances_matrix[54][12]=350;city_to_city_distances_matrix[54][13]=310;city_to_city_distances_matrix[54][14]=430;city_to_city_distances_matrix[54][15]=250;city_to_city_distances_matrix[54][16]=240;city_to_city_distances_matrix[54][17]=280;city_to_city_distances_matrix[54][18]=310;city_to_city_distances_matrix[54][19]=300;city_to_city_distances_matrix[54][20]=260;city_to_city_distances_matrix[54][21]=390;city_to_city_distances_matrix[54][22]=410;city_to_city_distances_matrix[54][23]=420;city_to_city_distances_matrix[54][24]=230;city_to_city_distances_matrix[54][25]=260;city_to_city_distances_matrix[54][26]=290;city_to_city_distances_matrix[54][27]=340;city_to_city_distances_matrix[54][28]=290;city_to_city_distances_matrix[54][29]=300;city_to_city_distances_matrix[54][30]=250;city_to_city_distances_matrix[54][31]=260;city_to_city_distances_matrix[54][32]=250;city_to_city_distances_matrix[54][33]=270;city_to_city_distances_matrix[54][34]=290;city_to_city_distances_matrix[54][35]=240;city_to_city_distances_matrix[54][36]=250;city_to_city_distances_matrix[54][37]=260;city_to_city_distances_matrix[54][38]=250;city_to_city_distances_matrix[54][39]=250;city_to_city_distances_matrix[54][40]=260;city_to_city_distances_matrix[54][41]=270;city_to_city_distances_matrix[54][42]=280;city_to_city_distances_matrix[54][43]=290;city_to_city_distances_matrix[54][44]=300;city_to_city_distances_matrix[54][45]=310;city_to_city_distances_matrix[54][46]=290;city_to_city_distances_matrix[54][47]=300;city_to_city_distances_matrix[54][48]=290;city_to_city_distances_matrix[54][49]=230;city_to_city_distances_matrix[54][50]=220;city_to_city_distances_matrix[54][51]=140;city_to_city_distances_matrix[54][52]=110;city_to_city_distances_matrix[54][53]=70;city_to_city_distances_matrix[54][54]=0;city_to_city_distances_matrix[54][55]=50;city_to_city_distances_matrix[54][56]=60;city_to_city_distances_matrix[54][57]=70;city_to_city_distances_matrix[54][58]=140;city_to_city_distances_matrix[54][59]=160;city_to_city_distances_matrix[54][60]=220;city_to_city_distances_matrix[54][61]=250;city_to_city_distances_matrix[54][62]=270;city_to_city_distances_matrix[54][63]=230;
city_to_city_distances_matrix[55][0]=340;city_to_city_distances_matrix[55][1]=350;city_to_city_distances_matrix[55][2]=330;city_to_city_distances_matrix[55][3]=370;city_to_city_distances_matrix[55][4]=345;city_to_city_distances_matrix[55][5]=335;city_to_city_distances_matrix[55][6]=380;city_to_city_distances_matrix[55][7]=390;city_to_city_distances_matrix[55][8]=300;city_to_city_distances_matrix[55][9]=290;city_to_city_distances_matrix[55][10]=360;city_to_city_distances_matrix[55][11]=340;city_to_city_distances_matrix[55][12]=330;city_to_city_distances_matrix[55][13]=290;city_to_city_distances_matrix[55][14]=410;city_to_city_distances_matrix[55][15]=230;city_to_city_distances_matrix[55][16]=220;city_to_city_distances_matrix[55][17]=260;city_to_city_distances_matrix[55][18]=290;city_to_city_distances_matrix[55][19]=280;city_to_city_distances_matrix[55][20]=240;city_to_city_distances_matrix[55][21]=370;city_to_city_distances_matrix[55][22]=390;city_to_city_distances_matrix[55][23]=400;city_to_city_distances_matrix[55][24]=210;city_to_city_distances_matrix[55][25]=240;city_to_city_distances_matrix[55][26]=270;city_to_city_distances_matrix[55][27]=320;city_to_city_distances_matrix[55][28]=270;city_to_city_distances_matrix[55][29]=280;city_to_city_distances_matrix[55][30]=230;city_to_city_distances_matrix[55][31]=240;city_to_city_distances_matrix[55][32]=230;city_to_city_distances_matrix[55][33]=250;city_to_city_distances_matrix[55][34]=270;city_to_city_distances_matrix[55][35]=220;city_to_city_distances_matrix[55][36]=230;city_to_city_distances_matrix[55][37]=240;city_to_city_distances_matrix[55][38]=230;city_to_city_distances_matrix[55][39]=230;city_to_city_distances_matrix[55][40]=240;city_to_city_distances_matrix[55][41]=250;city_to_city_distances_matrix[55][42]=260;city_to_city_distances_matrix[55][43]=270;city_to_city_distances_matrix[55][44]=280;city_to_city_distances_matrix[55][45]=290;city_to_city_distances_matrix[55][46]=270;city_to_city_distances_matrix[55][47]=280;city_to_city_distances_matrix[55][48]=270;city_to_city_distances_matrix[55][49]=210;city_to_city_distances_matrix[55][50]=200;city_to_city_distances_matrix[55][51]=120;city_to_city_distances_matrix[55][52]=90;city_to_city_distances_matrix[55][53]=50;city_to_city_distances_matrix[55][54]=50;city_to_city_distances_matrix[55][55]=0;city_to_city_distances_matrix[55][56]=50;city_to_city_distances_matrix[55][57]=60;city_to_city_distances_matrix[55][58]=130;city_to_city_distances_matrix[55][59]=150;city_to_city_distances_matrix[55][60]=210;city_to_city_distances_matrix[55][61]=240;city_to_city_distances_matrix[55][62]=260;city_to_city_distances_matrix[55][63]=220;
city_to_city_distances_matrix[56][0]=330;city_to_city_distances_matrix[56][1]=340;city_to_city_distances_matrix[56][2]=320;city_to_city_distances_matrix[56][3]=360;city_to_city_distances_matrix[56][4]=335;city_to_city_distances_matrix[56][5]=325;city_to_city_distances_matrix[56][6]=370;city_to_city_distances_matrix[56][7]=380;city_to_city_distances_matrix[56][8]=290;city_to_city_distances_matrix[56][9]=280;city_to_city_distances_matrix[56][10]=350;city_to_city_distances_matrix[56][11]=330;city_to_city_distances_matrix[56][12]=320;city_to_city_distances_matrix[56][13]=280;city_to_city_distances_matrix[56][14]=400;city_to_city_distances_matrix[56][15]=220;city_to_city_distances_matrix[56][16]=210;city_to_city_distances_matrix[56][17]=250;city_to_city_distances_matrix[56][18]=280;city_to_city_distances_matrix[56][19]=270;city_to_city_distances_matrix[56][20]=230;city_to_city_distances_matrix[56][21]=360;city_to_city_distances_matrix[56][22]=380;city_to_city_distances_matrix[56][23]=390;city_to_city_distances_matrix[56][24]=200;city_to_city_distances_matrix[56][25]=230;city_to_city_distances_matrix[56][26]=260;city_to_city_distances_matrix[56][27]=310;city_to_city_distances_matrix[56][28]=260;city_to_city_distances_matrix[56][29]=270;city_to_city_distances_matrix[56][30]=220;city_to_city_distances_matrix[56][31]=230;city_to_city_distances_matrix[56][32]=220;city_to_city_distances_matrix[56][33]=240;city_to_city_distances_matrix[56][34]=260;city_to_city_distances_matrix[56][35]=210;city_to_city_distances_matrix[56][36]=220;city_to_city_distances_matrix[56][37]=230;city_to_city_distances_matrix[56][38]=220;city_to_city_distances_matrix[56][39]=220;city_to_city_distances_matrix[56][40]=230;city_to_city_distances_matrix[56][41]=240;city_to_city_distances_matrix[56][42]=250;city_to_city_distances_matrix[56][43]=260;city_to_city_distances_matrix[56][44]=270;city_to_city_distances_matrix[56][45]=280;city_to_city_distances_matrix[56][46]=260;city_to_city_distances_matrix[56][47]=270;city_to_city_distances_matrix[56][48]=260;city_to_city_distances_matrix[56][49]=200;city_to_city_distances_matrix[56][50]=190;city_to_city_distances_matrix[56][51]=110;city_to_city_distances_matrix[56][52]=80;city_to_city_distances_matrix[56][53]=40;city_to_city_distances_matrix[56][54]=60;city_to_city_distances_matrix[56][55]=50;city_to_city_distances_matrix[56][56]=0;city_to_city_distances_matrix[56][57]=50;city_to_city_distances_matrix[56][58]=120;city_to_city_distances_matrix[56][59]=140;city_to_city_distances_matrix[56][60]=200;city_to_city_distances_matrix[56][61]=230;city_to_city_distances_matrix[56][62]=250;city_to_city_distances_matrix[56][63]=210;
city_to_city_distances_matrix[57][0]=340;city_to_city_distances_matrix[57][1]=350;city_to_city_distances_matrix[57][2]=330;city_to_city_distances_matrix[57][3]=370;city_to_city_distances_matrix[57][4]=345;city_to_city_distances_matrix[57][5]=335;city_to_city_distances_matrix[57][6]=380;city_to_city_distances_matrix[57][7]=390;city_to_city_distances_matrix[57][8]=300;city_to_city_distances_matrix[57][9]=290;city_to_city_distances_matrix[57][10]=360;city_to_city_distances_matrix[57][11]=340;city_to_city_distances_matrix[57][12]=330;city_to_city_distances_matrix[57][13]=290;city_to_city_distances_matrix[57][14]=410;city_to_city_distances_matrix[57][15]=230;city_to_city_distances_matrix[57][16]=220;city_to_city_distances_matrix[57][17]=260;city_to_city_distances_matrix[57][18]=290;city_to_city_distances_matrix[57][19]=280;city_to_city_distances_matrix[57][20]=240;city_to_city_distances_matrix[57][21]=370;city_to_city_distances_matrix[57][22]=390;city_to_city_distances_matrix[57][23]=400;city_to_city_distances_matrix[57][24]=210;city_to_city_distances_matrix[57][25]=240;city_to_city_distances_matrix[57][26]=270;city_to_city_distances_matrix[57][27]=320;city_to_city_distances_matrix[57][28]=270;city_to_city_distances_matrix[57][29]=280;city_to_city_distances_matrix[57][30]=230;city_to_city_distances_matrix[57][31]=240;city_to_city_distances_matrix[57][32]=230;city_to_city_distances_matrix[57][33]=250;city_to_city_distances_matrix[57][34]=270;city_to_city_distances_matrix[57][35]=220;city_to_city_distances_matrix[57][36]=230;city_to_city_distances_matrix[57][37]=240;city_to_city_distances_matrix[57][38]=230;city_to_city_distances_matrix[57][39]=230;city_to_city_distances_matrix[57][40]=240;city_to_city_distances_matrix[57][41]=250;city_to_city_distances_matrix[57][42]=260;city_to_city_distances_matrix[57][43]=270;city_to_city_distances_matrix[57][44]=280;city_to_city_distances_matrix[57][45]=290;city_to_city_distances_matrix[57][46]=270;city_to_city_distances_matrix[57][47]=280;city_to_city_distances_matrix[57][48]=270;city_to_city_distances_matrix[57][49]=210;city_to_city_distances_matrix[57][50]=200;city_to_city_distances_matrix[57][51]=120;city_to_city_distances_matrix[57][52]=90;city_to_city_distances_matrix[57][53]=50;city_to_city_distances_matrix[57][54]=70;city_to_city_distances_matrix[57][55]=60;city_to_city_distances_matrix[57][56]=50;city_to_city_distances_matrix[57][57]=0;city_to_city_distances_matrix[57][58]=130;city_to_city_distances_matrix[57][59]=150;city_to_city_distances_matrix[57][60]=210;city_to_city_distances_matrix[57][61]=240;city_to_city_distances_matrix[57][62]=260;city_to_city_distances_matrix[57][63]=220;
city_to_city_distances_matrix[58][0]=350;city_to_city_distances_matrix[58][1]=360;city_to_city_distances_matrix[58][2]=340;city_to_city_distances_matrix[58][3]=380;city_to_city_distances_matrix[58][4]=355;city_to_city_distances_matrix[58][5]=345;city_to_city_distances_matrix[58][6]=390;city_to_city_distances_matrix[58][7]=400;city_to_city_distances_matrix[58][8]=310;city_to_city_distances_matrix[58][9]=300;city_to_city_distances_matrix[58][10]=370;city_to_city_distances_matrix[58][11]=350;city_to_city_distances_matrix[58][12]=340;city_to_city_distances_matrix[58][13]=300;city_to_city_distances_matrix[58][14]=420;city_to_city_distances_matrix[58][15]=240;city_to_city_distances_matrix[58][16]=230;city_to_city_distances_matrix[58][17]=270;city_to_city_distances_matrix[58][18]=300;city_to_city_distances_matrix[58][19]=290;city_to_city_distances_matrix[58][20]=250;city_to_city_distances_matrix[58][21]=380;city_to_city_distances_matrix[58][22]=400;city_to_city_distances_matrix[58][23]=410;city_to_city_distances_matrix[58][24]=220;city_to_city_distances_matrix[58][25]=310;city_to_city_distances_matrix[58][26]=340;city_to_city_distances_matrix[58][27]=390;city_to_city_distances_matrix[58][28]=340;city_to_city_distances_matrix[58][29]=350;city_to_city_distances_matrix[58][30]=300;city_to_city_distances_matrix[58][31]=310;city_to_city_distances_matrix[58][32]=300;city_to_city_distances_matrix[58][33]=320;city_to_city_distances_matrix[58][34]=340;city_to_city_distances_matrix[58][35]=290;city_to_city_distances_matrix[58][36]=300;city_to_city_distances_matrix[58][37]=310;city_to_city_distances_matrix[58][38]=300;city_to_city_distances_matrix[58][39]=300;city_to_city_distances_matrix[58][40]=310;city_to_city_distances_matrix[58][41]=320;city_to_city_distances_matrix[58][42]=330;city_to_city_distances_matrix[58][43]=340;city_to_city_distances_matrix[58][44]=350;city_to_city_distances_matrix[58][45]=360;city_to_city_distances_matrix[58][46]=340;city_to_city_distances_matrix[58][47]=350;city_to_city_distances_matrix[58][48]=340;city_to_city_distances_matrix[58][49]=280;city_to_city_distances_matrix[58][50]=270;city_to_city_distances_matrix[58][51]=190;city_to_city_distances_matrix[58][52]=160;city_to_city_distances_matrix[58][53]=120;city_to_city_distances_matrix[58][54]=140;city_to_city_distances_matrix[58][55]=130;city_to_city_distances_matrix[58][56]=120;city_to_city_distances_matrix[58][57]=130;city_to_city_distances_matrix[58][58]=0;city_to_city_distances_matrix[58][59]=50;city_to_city_distances_matrix[58][60]=260;city_to_city_distances_matrix[58][61]=290;city_to_city_distances_matrix[58][62]=310;city_to_city_distances_matrix[58][63]=270;
city_to_city_distances_matrix[59][0]=370;city_to_city_distances_matrix[59][1]=380;city_to_city_distances_matrix[59][2]=360;city_to_city_distances_matrix[59][3]=400;city_to_city_distances_matrix[59][4]=375;city_to_city_distances_matrix[59][5]=365;city_to_city_distances_matrix[59][6]=410;city_to_city_distances_matrix[59][7]=420;city_to_city_distances_matrix[59][8]=330;city_to_city_distances_matrix[59][9]=320;city_to_city_distances_matrix[59][10]=390;city_to_city_distances_matrix[59][11]=370;city_to_city_distances_matrix[59][12]=360;city_to_city_distances_matrix[59][13]=320;city_to_city_distances_matrix[59][14]=440;city_to_city_distances_matrix[59][15]=260;city_to_city_distances_matrix[59][16]=250;city_to_city_distances_matrix[59][17]=290;city_to_city_distances_matrix[59][18]=320;city_to_city_distances_matrix[59][19]=310;city_to_city_distances_matrix[59][20]=270;city_to_city_distances_matrix[59][21]=400;city_to_city_distances_matrix[59][22]=420;city_to_city_distances_matrix[59][23]=430;city_to_city_distances_matrix[59][24]=240;city_to_city_distances_matrix[59][25]=330;city_to_city_distances_matrix[59][26]=360;city_to_city_distances_matrix[59][27]=410;city_to_city_distances_matrix[59][28]=360;city_to_city_distances_matrix[59][29]=370;city_to_city_distances_matrix[59][30]=320;city_to_city_distances_matrix[59][31]=330;city_to_city_distances_matrix[59][32]=320;city_to_city_distances_matrix[59][33]=340;city_to_city_distances_matrix[59][34]=360;city_to_city_distances_matrix[59][35]=310;city_to_city_distances_matrix[59][36]=320;city_to_city_distances_matrix[59][37]=330;city_to_city_distances_matrix[59][38]=320;city_to_city_distances_matrix[59][39]=320;city_to_city_distances_matrix[59][40]=330;city_to_city_distances_matrix[59][41]=340;city_to_city_distances_matrix[59][42]=350;city_to_city_distances_matrix[59][43]=360;city_to_city_distances_matrix[59][44]=370;city_to_city_distances_matrix[59][45]=380;city_to_city_distances_matrix[59][46]=360;city_to_city_distances_matrix[59][47]=370;city_to_city_distances_matrix[59][48]=360;city_to_city_distances_matrix[59][49]=300;city_to_city_distances_matrix[59][50]=290;city_to_city_distances_matrix[59][51]=210;city_to_city_distances_matrix[59][52]=180;city_to_city_distances_matrix[59][53]=140;city_to_city_distances_matrix[59][54]=160;city_to_city_distances_matrix[59][55]=150;city_to_city_distances_matrix[59][56]=140;city_to_city_distances_matrix[59][57]=150;city_to_city_distances_matrix[59][58]=50;city_to_city_distances_matrix[59][59]=0;city_to_city_distances_matrix[59][60]=280;city_to_city_distances_matrix[59][61]=310;city_to_city_distances_matrix[59][62]=330;city_to_city_distances_matrix[59][63]=290;
city_to_city_distances_matrix[60][0]=200;city_to_city_distances_matrix[60][1]=210;city_to_city_distances_matrix[60][2]=190;city_to_city_distances_matrix[60][3]=230;city_to_city_distances_matrix[60][4]=205;city_to_city_distances_matrix[60][5]=195;city_to_city_distances_matrix[60][6]=240;city_to_city_distances_matrix[60][7]=250;city_to_city_distances_matrix[60][8]=160;city_to_city_distances_matrix[60][9]=150;city_to_city_distances_matrix[60][10]=220;city_to_city_distances_matrix[60][11]=200;city_to_city_distances_matrix[60][12]=190;city_to_city_distances_matrix[60][13]=150;city_to_city_distances_matrix[60][14]=270;city_to_city_distances_matrix[60][15]=90;city_to_city_distances_matrix[60][16]=80;city_to_city_distances_matrix[60][17]=120;city_to_city_distances_matrix[60][18]=150;city_to_city_distances_matrix[60][19]=140;city_to_city_distances_matrix[60][20]=100;city_to_city_distances_matrix[60][21]=230;city_to_city_distances_matrix[60][22]=250;city_to_city_distances_matrix[60][23]=260;city_to_city_distances_matrix[60][24]=80;city_to_city_distances_matrix[60][25]=160;city_to_city_distances_matrix[60][26]=170;city_to_city_distances_matrix[60][27]=200;city_to_city_distances_matrix[60][28]=180;city_to_city_distances_matrix[60][29]=190;city_to_city_distances_matrix[60][30]=150;city_to_city_distances_matrix[60][31]=160;city_to_city_distances_matrix[60][32]=150;city_to_city_distances_matrix[60][33]=170;city_to_city_distances_matrix[60][34]=190;city_to_city_distances_matrix[60][35]=140;city_to_city_distances_matrix[60][36]=150;city_to_city_distances_matrix[60][37]=160;city_to_city_distances_matrix[60][38]=140;city_to_city_distances_matrix[60][39]=140;city_to_city_distances_matrix[60][40]=150;city_to_city_distances_matrix[60][41]=160;city_to_city_distances_matrix[60][42]=170;city_to_city_distances_matrix[60][43]=190;city_to_city_distances_matrix[60][44]=200;city_to_city_distances_matrix[60][45]=210;city_to_city_distances_matrix[60][46]=190;city_to_city_distances_matrix[60][47]=200;city_to_city_distances_matrix[60][48]=190;city_to_city_distances_matrix[60][49]=120;city_to_city_distances_matrix[60][50]=110;city_to_city_distances_matrix[60][51]=170;city_to_city_distances_matrix[60][52]=190;city_to_city_distances_matrix[60][53]=200;city_to_city_distances_matrix[60][54]=220;city_to_city_distances_matrix[60][55]=210;city_to_city_distances_matrix[60][56]=200;city_to_city_distances_matrix[60][57]=210;city_to_city_distances_matrix[60][58]=260;city_to_city_distances_matrix[60][59]=280;city_to_city_distances_matrix[60][60]=0;city_to_city_distances_matrix[60][61]=60;city_to_city_distances_matrix[60][62]=80;city_to_city_distances_matrix[60][63]=40;
city_to_city_distances_matrix[61][0]=210;city_to_city_distances_matrix[61][1]=220;city_to_city_distances_matrix[61][2]=200;city_to_city_distances_matrix[61][3]=240;city_to_city_distances_matrix[61][4]=215;city_to_city_distances_matrix[61][5]=205;city_to_city_distances_matrix[61][6]=250;city_to_city_distances_matrix[61][7]=260;city_to_city_distances_matrix[61][8]=170;city_to_city_distances_matrix[61][9]=160;city_to_city_distances_matrix[61][10]=230;city_to_city_distances_matrix[61][11]=210;city_to_city_distances_matrix[61][12]=200;city_to_city_distances_matrix[61][13]=160;city_to_city_distances_matrix[61][14]=280;city_to_city_distances_matrix[61][15]=100;city_to_city_distances_matrix[61][16]=90;city_to_city_distances_matrix[61][17]=130;city_to_city_distances_matrix[61][18]=160;city_to_city_distances_matrix[61][19]=150;city_to_city_distances_matrix[61][20]=110;city_to_city_distances_matrix[61][21]=240;city_to_city_distances_matrix[61][22]=260;city_to_city_distances_matrix[61][23]=270;city_to_city_distances_matrix[61][24]=90;city_to_city_distances_matrix[61][25]=170;city_to_city_distances_matrix[61][26]=180;city_to_city_distances_matrix[61][27]=210;city_to_city_distances_matrix[61][28]=190;city_to_city_distances_matrix[61][29]=200;city_to_city_distances_matrix[61][30]=160;city_to_city_distances_matrix[61][31]=170;city_to_city_distances_matrix[61][32]=160;city_to_city_distances_matrix[61][33]=180;city_to_city_distances_matrix[61][34]=200;city_to_city_distances_matrix[61][35]=150;city_to_city_distances_matrix[61][36]=160;city_to_city_distances_matrix[61][37]=170;city_to_city_distances_matrix[61][38]=150;city_to_city_distances_matrix[61][39]=150;city_to_city_distances_matrix[61][40]=160;city_to_city_distances_matrix[61][41]=170;city_to_city_distances_matrix[61][42]=180;city_to_city_distances_matrix[61][43]=200;city_to_city_distances_matrix[61][44]=210;city_to_city_distances_matrix[61][45]=220;city_to_city_distances_matrix[61][46]=200;city_to_city_distances_matrix[61][47]=210;city_to_city_distances_matrix[61][48]=200;city_to_city_distances_matrix[61][49]=130;city_to_city_distances_matrix[61][50]=120;city_to_city_distances_matrix[61][51]=180;city_to_city_distances_matrix[61][52]=200;city_to_city_distances_matrix[61][53]=210;city_to_city_distances_matrix[61][54]=230;city_to_city_distances_matrix[61][55]=220;city_to_city_distances_matrix[61][56]=210;city_to_city_distances_matrix[61][57]=220;city_to_city_distances_matrix[61][58]=270;city_to_city_distances_matrix[61][59]=290;city_to_city_distances_matrix[61][60]=60;city_to_city_distances_matrix[61][61]=0;city_to_city_distances_matrix[61][62]=50;city_to_city_distances_matrix[61][63]=30;
city_to_city_distances_matrix[62][0]=230;city_to_city_distances_matrix[62][1]=240;city_to_city_distances_matrix[62][2]=220;city_to_city_distances_matrix[62][3]=260;city_to_city_distances_matrix[62][4]=235;city_to_city_distances_matrix[62][5]=225;city_to_city_distances_matrix[62][6]=270;city_to_city_distances_matrix[62][7]=280;city_to_city_distances_matrix[62][8]=190;city_to_city_distances_matrix[62][9]=180;city_to_city_distances_matrix[62][10]=250;city_to_city_distances_matrix[62][11]=230;city_to_city_distances_matrix[62][12]=220;city_to_city_distances_matrix[62][13]=180;city_to_city_distances_matrix[62][14]=300;city_to_city_distances_matrix[62][15]=120;city_to_city_distances_matrix[62][16]=110;city_to_city_distances_matrix[62][17]=150;city_to_city_distances_matrix[62][18]=180;city_to_city_distances_matrix[62][19]=170;city_to_city_distances_matrix[62][20]=130;city_to_city_distances_matrix[62][21]=260;city_to_city_distances_matrix[62][22]=280;city_to_city_distances_matrix[62][23]=290;city_to_city_distances_matrix[62][24]=110;city_to_city_distances_matrix[62][25]=190;city_to_city_distances_matrix[62][26]=200;city_to_city_distances_matrix[62][27]=230;city_to_city_distances_matrix[62][28]=210;city_to_city_distances_matrix[62][29]=220;city_to_city_distances_matrix[62][30]=180;city_to_city_distances_matrix[62][31]=190;city_to_city_distances_matrix[62][32]=180;city_to_city_distances_matrix[62][33]=200;city_to_city_distances_matrix[62][34]=220;city_to_city_distances_matrix[62][35]=170;city_to_city_distances_matrix[62][36]=180;city_to_city_distances_matrix[62][37]=190;city_to_city_distances_matrix[62][38]=170;city_to_city_distances_matrix[62][39]=170;city_to_city_distances_matrix[62][40]=180;city_to_city_distances_matrix[62][41]=190;city_to_city_distances_matrix[62][42]=200;city_to_city_distances_matrix[62][43]=220;city_to_city_distances_matrix[62][44]=230;city_to_city_distances_matrix[62][45]=240;city_to_city_distances_matrix[62][46]=220;city_to_city_distances_matrix[62][47]=230;city_to_city_distances_matrix[62][48]=220;city_to_city_distances_matrix[62][49]=150;city_to_city_distances_matrix[62][50]=140;city_to_city_distances_matrix[62][51]=200;city_to_city_distances_matrix[62][52]=220;city_to_city_distances_matrix[62][53]=230;city_to_city_distances_matrix[62][54]=250;city_to_city_distances_matrix[62][55]=240;city_to_city_distances_matrix[62][56]=230;city_to_city_distances_matrix[62][57]=240;city_to_city_distances_matrix[62][58]=290;city_to_city_distances_matrix[62][59]=310;city_to_city_distances_matrix[62][60]=80;city_to_city_distances_matrix[62][61]=50;city_to_city_distances_matrix[62][62]=0;city_to_city_distances_matrix[62][63]=40;
city_to_city_distances_matrix[63][0]=200;city_to_city_distances_matrix[63][1]=210;city_to_city_distances_matrix[63][2]=190;city_to_city_distances_matrix[63][3]=230;city_to_city_distances_matrix[63][4]=205;city_to_city_distances_matrix[63][5]=195;city_to_city_distances_matrix[63][6]=240;city_to_city_distances_matrix[63][7]=250;city_to_city_distances_matrix[63][8]=160;city_to_city_distances_matrix[63][9]=150;city_to_city_distances_matrix[63][10]=220;city_to_city_distances_matrix[63][11]=200;city_to_city_distances_matrix[63][12]=190;city_to_city_distances_matrix[63][13]=150;city_to_city_distances_matrix[63][14]=270;city_to_city_distances_matrix[63][15]=90;city_to_city_distances_matrix[63][16]=80;city_to_city_distances_matrix[63][17]=120;city_to_city_distances_matrix[63][18]=150;city_to_city_distances_matrix[63][19]=140;city_to_city_distances_matrix[63][20]=100;city_to_city_distances_matrix[63][21]=230;city_to_city_distances_matrix[63][22]=250;city_to_city_distances_matrix[63][23]=260;city_to_city_distances_matrix[63][24]=80;city_to_city_distances_matrix[63][25]=160;city_to_city_distances_matrix[63][26]=170;city_to_city_distances_matrix[63][27]=200;city_to_city_distances_matrix[63][28]=180;city_to_city_distances_matrix[63][29]=190;city_to_city_distances_matrix[63][30]=150;city_to_city_distances_matrix[63][31]=160;city_to_city_distances_matrix[63][32]=150;city_to_city_distances_matrix[63][33]=170;city_to_city_distances_matrix[63][34]=190;city_to_city_distances_matrix[63][35]=140;city_to_city_distances_matrix[63][36]=150;city_to_city_distances_matrix[63][37]=160;city_to_city_distances_matrix[63][38]=140;city_to_city_distances_matrix[63][39]=140;city_to_city_distances_matrix[63][40]=150;city_to_city_distances_matrix[63][41]=160;city_to_city_distances_matrix[63][42]=170;city_to_city_distances_matrix[63][43]=190;city_to_city_distances_matrix[63][44]=200;city_to_city_distances_matrix[63][45]=210;city_to_city_distances_matrix[63][46]=190;city_to_city_distances_matrix[63][47]=200;city_to_city_distances_matrix[63][48]=190;city_to_city_distances_matrix[63][49]=120;city_to_city_distances_matrix[63][50]=110;city_to_city_distances_matrix[63][51]=170;city_to_city_distances_matrix[63][52]=190;city_to_city_distances_matrix[63][53]=200;city_to_city_distances_matrix[63][54]=220;city_to_city_distances_matrix[63][55]=210;city_to_city_distances_matrix[63][56]=200;city_to_city_distances_matrix[63][57]=210;city_to_city_distances_matrix[63][58]=260;city_to_city_distances_matrix[63][59]=280;city_to_city_distances_matrix[63][60]=40;city_to_city_distances_matrix[63][61]=30;city_to_city_distances_matrix[63][62]=40;city_to_city_distances_matrix[63][63]=0;

}

void City(int city_number)
{
    switch(city_number)
    {
    case 0: cout << "Dhaka"; break;
    case 1: cout << "Gazipur"; break;
    case 2: cout << "Narayanganj"; break;
    case 3: cout << "Manikganj"; break;
    case 4: cout << "Munshiganj"; break;
    case 5: cout << "Narsingdi"; break;
    case 6: cout << "Tangail"; break;
    case 7: cout << "Kishoreganj"; break;
    case 8: cout << "Faridpur"; break;
    case 9: cout << "Rajbari"; break;
    case 10: cout << "Gopalganj"; break;
    case 11: cout << "Madaripur"; break;
    case 12: cout << "Shariatpur"; break;
    case 13: cout << "Chattogram"; break;
    case 14: cout << "Cox's Bazar"; break;
    case 15: cout << "Cumilla"; break;
    case 16: cout << "Chandpur"; break;
    case 17: cout << "Feni"; break;
    case 18: cout << "Noakhali"; break;
    case 19: cout << "Lakshmipur"; break;
    case 20: cout << "Brahmanbaria"; break;
    case 21: cout << "Khagrachhari"; break;
    case 22: cout << "Rangamati"; break;
    case 23: cout << "Bandarban"; break;
    case 24: cout << "Rajshahi"; break;
    case 25: cout << "Naogaon"; break;
    case 26: cout << "Natore"; break;
    case 27: cout << "Chapainawabganj"; break;
    case 28: cout << "Bogura"; break;
    case 29: cout << "Joypurhat"; break;
    case 30: cout << "Pabna"; break;
    case 31: cout << "Sirajganj"; break;
    case 32: cout << "Khulna"; break;
    case 33: cout << "Bagerhat"; break;
    case 34: cout << "Satkhira"; break;
    case 35: cout << "Jessore"; break;
    case 36: cout << "Narail"; break;
    case 37: cout << "Jhenaidah"; break;
    case 38: cout << "Magura"; break;
    case 39: cout << "Kushtia"; break;
    case 40: cout << "Chuadanga"; break;
    case 41: cout << "Meherpur"; break;
    case 42: cout << "Barisal"; break;
    case 43: cout << "Bhola"; break;
    case 44: cout << "Jhalokati"; break;
    case 45: cout << "Patuakhali"; break;
    case 46: cout << "Pirojpur"; break;
    case 47: cout << "Barguna"; break;
    case 48: cout << "Sylhet"; break;
    case 49: cout << "Moulvibazar"; break;
    case 50: cout << "Habiganj"; break;
    case 51: cout << "Sunamganj"; break;
    case 52: cout << "Rangpur"; break;
    case 53: cout << "Gaibandha"; break;
    case 54: cout << "Kurigram"; break;
    case 55: cout << "Lalmonirhat"; break;
    case 56: cout << "Nilphamari"; break;
    case 57: cout << "Dinajpur"; break;
    case 58: cout << "Thakurgaon"; break;
    case 59: cout << "Panchagarh"; break;
    case 60: cout << "Mymensingh"; break;
    case 61: cout << "Jamalpur"; break;
    case 62: cout << "Sherpur"; break;
    case 63: cout << "Netrokona"; break;
    default: cout << "Invalid Number";
    }
}

void city_number_list()
{
    cout << "City Number List:\n\n";

    cout << "0  -> Dhaka\n";
    cout << "1  -> Gazipur\n";
    cout << "2  -> Narayanganj\n";
    cout << "3  -> Manikganj\n";
    cout << "4  -> Munshiganj\n";
    cout << "5  -> Narsingdi\n";
    cout << "6  -> Tangail\n";
    cout << "7  -> Kishoreganj\n";
    cout << "8  -> Faridpur\n";
    cout << "9  -> Rajbari\n";
    cout << "10 -> Gopalganj\n";
    cout << "11 -> Madaripur\n";
    cout << "12 -> Shariatpur\n";
    cout << "13 -> Chattogram\n";
    cout << "14 -> Cox's Bazar\n";
    cout << "15 -> Cumilla\n";
    cout << "16 -> Chandpur\n";
    cout << "17 -> Feni\n";
    cout << "18 -> Noakhali\n";
    cout << "19 -> Lakshmipur\n";
    cout << "20 -> Brahmanbaria\n";
    cout << "21 -> Khagrachhari\n";
    cout << "22 -> Rangamati\n";
    cout << "23 -> Bandarban\n";
    cout << "24 -> Rajshahi\n";
    cout << "25 -> Naogaon\n";
    cout << "26 -> Natore\n";
    cout << "27 -> Chapainawabganj\n";
    cout << "28 -> Bogura\n";
    cout << "29 -> Joypurhat\n";
    cout << "30 -> Pabna\n";
    cout << "31 -> Sirajganj\n";
    cout << "32 -> Khulna\n";
    cout << "33 -> Bagerhat\n";
    cout << "34 -> Satkhira\n";
    cout << "35 -> Jessore\n";
    cout << "36 -> Narail\n";
    cout << "37 -> Jhenaidah\n";
    cout << "38 -> Magura\n";
    cout << "39 -> Kushtia\n";
    cout << "40 -> Chuadanga\n";
    cout << "41 -> Meherpur\n";
    cout << "42 -> Barisal\n";
    cout << "43 -> Bhola\n";
    cout << "44 -> Jhalokati\n";
    cout << "45 -> Patuakhali\n";
    cout << "46 -> Pirojpur\n";
    cout << "47 -> Barguna\n";
    cout << "48 -> Sylhet\n";
    cout << "49 -> Moulvibazar\n";
    cout << "50 -> Habiganj\n";
    cout << "51 -> Sunamganj\n";
    cout << "52 -> Rangpur\n";
    cout << "53 -> Gaibandha\n";
    cout << "54 -> Kurigram\n";
    cout << "55 -> Lalmonirhat\n";
    cout << "56 -> Nilphamari\n";
    cout << "57 -> Dinajpur\n";
    cout << "58 -> Thakurgaon\n";
    cout << "59 -> Panchagarh\n";
    cout << "60 -> Mymensingh\n";
    cout << "61 -> Jamalpur\n";
    cout << "62 -> Sherpur\n";
    cout << "63 -> Netrokona\n";
}
class City_Information
{
public:
    string city_name;
    string city_center;
    string tourist_spots;
    string traveling_assistant_and_route_planner_and_information_of_this_person;
    string booking_and_ticketing_system;
    string the_list_of_mumber_of_per_traveling_assistant_and_their_information;
} city_information[64];

void city_Information()
{
    
    city_information[0].city_name = "Dhaka";
	city_information[0].city_center = "Gulistan";
	city_information[0].tourist_spots = "Lalbagh Fort, Ahsan Manzil";
	city_information[0].traveling_assistant_and_route_planner_and_information_of_this_person = "Rahim - Route guide available 24/7";
	city_information[0].booking_and_ticketing_system = "Online + Counter";
	city_information[0].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "10 assistants available";


	city_information[1].city_name = "Gazipur";
	city_information[1].city_center = "Chowrasta";
	city_information[1].tourist_spots = "Bhawal National Park, Safari Park";
	city_information[1].traveling_assistant_and_route_planner_and_information_of_this_person = "Karim - Local travel assistant";
	city_information[1].booking_and_ticketing_system = "Online + Counter";
	city_information[1].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";


	city_information[2].city_name = "Narayanganj";
	city_information[2].city_center = "Chashara";
	city_information[2].tourist_spots = "Sonalong, Meghna River view";
	city_information[2].traveling_assistant_and_route_planner_and_information_of_this_person = "Sabbir - Route planner";
	city_information[2].booking_and_ticketing_system = "Online system only";
	city_information[2].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[3].city_name = "Manikganj";
	city_information[3].city_center = "Manikganj Sadar";
	city_information[3].tourist_spots = "Baliati Zamindar Bari";
	city_information[3].traveling_assistant_and_route_planner_and_information_of_this_person = "Rafi - Tourist guide";
	city_information[3].booking_and_ticketing_system = "Counter system";
	city_information[3].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[4].city_name = "Munshiganj";
	city_information[4].city_center = "Munshiganj Sadar";
	city_information[4].tourist_spots = "Sonargaon, Padma River area";
	city_information[4].traveling_assistant_and_route_planner_and_information_of_this_person = "Hasan - Local guide";
	city_information[4].booking_and_ticketing_system = "Online + Counter";
	city_information[4].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[5].city_name = "Narsingdi";
	city_information[5].city_center = "Narsingdi Sadar";
	city_information[5].tourist_spots = "Meghna River, local parks";
	city_information[5].traveling_assistant_and_route_planner_and_information_of_this_person = "Imran - Route assistant";
	city_information[5].booking_and_ticketing_system = "Online + Counter";
	city_information[5].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";

	city_information[6].city_name = "Tangail";
	city_information[6].city_center = "Tangail Sadar";
	city_information[6].tourist_spots = "Mohera Zamindar Bari, Madhupur Forest";
	city_information[6].traveling_assistant_and_route_planner_and_information_of_this_person = "Arif - Route guide available";
	city_information[6].booking_and_ticketing_system = "Online + Counter";
	city_information[6].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[7].city_name = "Kishoreganj";
	city_information[7].city_center = "Kishoreganj Sadar";
	city_information[7].tourist_spots = "Nikli Haor, Baikkabil";
	city_information[7].traveling_assistant_and_route_planner_and_information_of_this_person = "Sohan - Water route specialist";
	city_information[7].booking_and_ticketing_system = "Online + Counter";
	city_information[7].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[8].city_name = "Faridpur";
	city_information[8].city_center = "Faridpur Sadar";
	city_information[8].tourist_spots = "Padma River bank, local parks";
	city_information[8].traveling_assistant_and_route_planner_and_information_of_this_person = "Kamal - Local guide";
	city_information[8].booking_and_ticketing_system = "Online system only";
	city_information[8].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[9].city_name = "Rajbari";
	city_information[9].city_center = "Rajbari Sadar";
	city_information[9].tourist_spots = "Padma River view, estates";
	city_information[9].traveling_assistant_and_route_planner_and_information_of_this_person = "Rashed - Route planner";
	city_information[9].booking_and_ticketing_system = "Online + Counter";
	city_information[9].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "4 assistants available";


	city_information[10].city_name = "Gopalganj";
	city_information[10].city_center = "Gopalganj Sadar";
	city_information[10].tourist_spots = "Mujib Memorial Museum, local lake areas";
	city_information[10].traveling_assistant_and_route_planner_and_information_of_this_person = "Nayeem - Tourist guide";
	city_information[10].booking_and_ticketing_system = "Online + Counter";
	city_information[10].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";

	city_information[11].city_name = "Munshiganj";
	city_information[11].city_center = "Munshiganj Sadar";
	city_information[11].tourist_spots = "Padma River, Sonargaon nearby heritage areas";
	city_information[11].traveling_assistant_and_route_planner_and_information_of_this_person = "Shakil - River route guide";
	city_information[11].booking_and_ticketing_system = "Online + Counter";
	city_information[11].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[12].city_name = "Shariatpur";
	city_information[12].city_center = "Shariatpur Sadar";
	city_information[12].tourist_spots = "Padma River bank, rural scenic areas";
	city_information[12].traveling_assistant_and_route_planner_and_information_of_this_person = "Jahid - Local travel assistant";
	city_information[12].booking_and_ticketing_system = "Online system only";
	city_information[12].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[13].city_name = "Chattogram";
	city_information[13].city_center = "Agrabad";
	city_information[13].tourist_spots = "Patenga Sea Beach, Foy's Lake, Naval area";
	city_information[13].traveling_assistant_and_route_planner_and_information_of_this_person = "Mahin - Coastal route guide";
	city_information[13].booking_and_ticketing_system = "Online + Counter";
	city_information[13].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "12 assistants available";


	city_information[14].city_name = "Cox's Bazar";
	city_information[14].city_center = "Kolatoli";
	city_information[14].tourist_spots = "World longest sea beach, Himchari, Inani Beach";
	city_information[14].traveling_assistant_and_route_planner_and_information_of_this_person = "Rafiq - Beach tour guide";
	city_information[14].booking_and_ticketing_system = "Online + Counter";
	city_information[14].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "15 assistants available";


	city_information[15].city_name = "Cumilla";
	city_information[15].city_center = "Cumilla Sadar";
	city_information[15].tourist_spots = "Mainamati, Shalban Vihara";
	city_information[15].traveling_assistant_and_route_planner_and_information_of_this_person = "Tareq - Historical site guide";
	city_information[15].booking_and_ticketing_system = "Online + Counter";
	city_information[15].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "9 assistants available";


	city_information[16].city_name = "Chandpur";
	city_information[16].city_center = "Chandpur Sadar";
	city_information[16].tourist_spots = "Meghna River confluence";
	city_information[16].traveling_assistant_and_route_planner_and_information_of_this_person = "Naim - River tour guide";
	city_information[16].booking_and_ticketing_system = "Counter system";
	city_information[16].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[17].city_name = "Feni";
	city_information[17].city_center = "Feni Sadar";
	city_information[17].tourist_spots = "Mohipal area, local parks";
	city_information[17].traveling_assistant_and_route_planner_and_information_of_this_person = "Sajid - Local assistant";
	city_information[17].booking_and_ticketing_system = "Online system only";
	city_information[17].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[18].city_name = "Noakhali";
	city_information[18].city_center = "Maijdee";
	city_information[18].tourist_spots = "Nijhum Dwip, coastal areas";
	city_information[18].traveling_assistant_and_route_planner_and_information_of_this_person = "Arman - Island route guide";
	city_information[18].booking_and_ticketing_system = "Online + Counter";
	city_information[18].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";


	city_information[19].city_name = "Lakshmipur";
	city_information[19].city_center = "Lakshmipur Sadar";
	city_information[19].tourist_spots = "Meghna River, rural scenic areas";
	city_information[19].traveling_assistant_and_route_planner_and_information_of_this_person = "Shuvo - Local guide";
	city_information[19].booking_and_ticketing_system = "Online system only";
	city_information[19].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[20].city_name = "Brahmanbaria";
	city_information[20].city_center = "Brahmanbaria Sadar";
	city_information[20].tourist_spots = "Hatirpool, Titas River views";
	city_information[20].traveling_assistant_and_route_planner_and_information_of_this_person = "Rakib - Route planner";
	city_information[20].booking_and_ticketing_system = "Online + Counter";
	city_information[20].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";

	city_information[21].city_name = "Khagrachhari";
	city_information[21].city_center = "Khagrachhari Sadar";
	city_information[21].tourist_spots = "Alutila Cave, Sajek Valley (nearby)";
	city_information[21].traveling_assistant_and_route_planner_and_information_of_this_person = "Babu - Hill track guide";
	city_information[21].booking_and_ticketing_system = "Online + Counter";
	city_information[21].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[22].city_name = "Rangamati";
	city_information[22].city_center = "Rangamati Sadar";
	city_information[22].tourist_spots = "Kaptai Lake, Hanging Bridge";
	city_information[22].traveling_assistant_and_route_planner_and_information_of_this_person = "Rony - Lake tour guide";
	city_information[22].booking_and_ticketing_system = "Online + Counter";
	city_information[22].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "10 assistants available";


	city_information[23].city_name = "Bandarban";
	city_information[23].city_center = "Bandarban Sadar";
	city_information[23].tourist_spots = "Nilgiri, Nilachol, Boga Lake";
	city_information[23].traveling_assistant_and_route_planner_and_information_of_this_person = "Shahid - Hill trekking guide";
	city_information[23].booking_and_ticketing_system = "Online + Counter";
	city_information[23].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "12 assistants available";


	city_information[24].city_name = "Rajshahi";
	city_information[24].city_center = "Shaheb Bazar";
	city_information[24].tourist_spots = "Varendra Museum, Padma River bank";
	city_information[24].traveling_assistant_and_route_planner_and_information_of_this_person = "Imtiaz - Heritage guide";
	city_information[24].booking_and_ticketing_system = "Online + Counter";
	city_information[24].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "9 assistants available";


	city_information[25].city_name = "Naogaon";
	city_information[25].city_center = "Naogaon Sadar";
	city_information[25].tourist_spots = "Paharpur Buddhist Vihara";
	city_information[25].traveling_assistant_and_route_planner_and_information_of_this_person = "Rahman - Historical guide";
	city_information[25].booking_and_ticketing_system = "Online + Counter";
	city_information[25].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[26].city_name = "Natore";
	city_information[26].city_center = "Natore Sadar";
	city_information[26].tourist_spots = "Uttara Gano Bhaban, Chalan Beel";
	city_information[26].traveling_assistant_and_route_planner_and_information_of_this_person = "Siam - Local guide";
	city_information[26].booking_and_ticketing_system = "Online system only";
	city_information[26].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[27].city_name = "Chapainawabganj";
	city_information[27].city_center = "Chapainawabganj Sadar";
	city_information[27].tourist_spots = "Shibganj Mango orchards, Rajbari ruins";
	city_information[27].traveling_assistant_and_route_planner_and_information_of_this_person = "Hasib - Mango tour guide";
	city_information[27].booking_and_ticketing_system = "Online + Counter";
	city_information[27].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[28].city_name = "Bogura";
	city_information[28].city_center = "Bogura Sadar";
	city_information[28].tourist_spots = "Mahasthangarh, Behular Bashor Ghor";
	city_information[28].traveling_assistant_and_route_planner_and_information_of_this_person = "Rafi - Archaeology guide";
	city_information[28].booking_and_ticketing_system = "Online + Counter";
	city_information[28].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";


	city_information[29].city_name = "Joypurhat";
	city_information[29].city_center = "Joypurhat Sadar";
	city_information[29].tourist_spots = "Ramsagar Dighi, local historical sites";
	city_information[29].traveling_assistant_and_route_planner_and_information_of_this_person = "Anik - Local guide";
	city_information[29].booking_and_ticketing_system = "Online system only";
	city_information[29].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[30].city_name = "Pabna";
	city_information[30].city_center = "Pabna Sadar";
	city_information[30].tourist_spots = "Hardinge Bridge, mental hospital heritage";
	city_information[30].traveling_assistant_and_route_planner_and_information_of_this_person = "Tuhin - Route guide";
	city_information[30].booking_and_ticketing_system = "Online + Counter";
	city_information[30].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";


	city_information[31].city_name = "Sirajganj";
	city_information[31].city_center = "Sirajganj Sadar";
	city_information[31].tourist_spots = "Jamuna Bridge, river view points";
	city_information[31].traveling_assistant_and_route_planner_and_information_of_this_person = "Rasel - Bridge route guide";
	city_information[31].booking_and_ticketing_system = "Online + Counter";
	city_information[31].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "9 assistants available";


	city_information[32].city_name = "Khulna";
	city_information[32].city_center = "Khulna Sadar";
	city_information[32].tourist_spots = "Sundarbans gateway, Shilaidaha Kuthibari";
	city_information[32].traveling_assistant_and_route_planner_and_information_of_this_person = "Sakib - Mangrove guide";
	city_information[32].booking_and_ticketing_system = "Online + Counter";
	city_information[32].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "10 assistants available";


	city_information[33].city_name = "Bagerhat";
	city_information[33].city_center = "Bagerhat Sadar";
	city_information[33].tourist_spots = "Sixty Dome Mosque, Shait Gumbad Mosque";
	city_information[33].traveling_assistant_and_route_planner_and_information_of_this_person = "Khalid - Islamic heritage guide";
	city_information[33].booking_and_ticketing_system = "Online + Counter";
	city_information[33].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[34].city_name = "Satkhira";
	city_information[34].city_center = "Satkhira Sadar";
	city_information[34].tourist_spots = "Sundarbans entry point, coastal areas";
	city_information[34].traveling_assistant_and_route_planner_and_information_of_this_person = "Monir - Coastal guide";
	city_information[34].booking_and_ticketing_system = "Online system only";
	city_information[34].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[35].city_name = "Jessore";
	city_information[35].city_center = "Jessore Sadar";
	city_information[35].tourist_spots = "Gour Nandi Park, Michael Madhusudan house";
	city_information[35].traveling_assistant_and_route_planner_and_information_of_this_person = "Shuvo - Cultural guide";
	city_information[35].booking_and_ticketing_system = "Online + Counter";
	city_information[35].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";


	city_information[36].city_name = "Narail";
	city_information[36].city_center = "Narail Sadar";
	city_information[36].tourist_spots = "Victoria Park, Chitra River";
	city_information[36].traveling_assistant_and_route_planner_and_information_of_this_person = "Faruk - River guide";
	city_information[36].booking_and_ticketing_system = "Online system only";
	city_information[36].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[37].city_name = "Jhenaidah";
	city_information[37].city_center = "Jhenaidah Sadar";
	city_information[37].tourist_spots = "Kotchandpur bridge, local parks";
	city_information[37].traveling_assistant_and_route_planner_and_information_of_this_person = "Tanvir - Local guide";
	city_information[37].booking_and_ticketing_system = "Online + Counter";
	city_information[37].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[38].city_name = "Magura";
	city_information[38].city_center = "Magura Sadar";
	city_information[38].tourist_spots = "Nohata Park, rural river views";
	city_information[38].traveling_assistant_and_route_planner_and_information_of_this_person = "Jamal - Local assistant";
	city_information[38].booking_and_ticketing_system = "Online system only";
	city_information[38].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[39].city_name = "Kushtia";
	city_information[39].city_center = "Kushtia Sadar";
	city_information[39].tourist_spots = "Lalon Shah Mazar, Tagore Kuthibari";
	city_information[39].traveling_assistant_and_route_planner_and_information_of_this_person = "Arif - Cultural guide";
	city_information[39].booking_and_ticketing_system = "Online + Counter";
	city_information[39].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "9 assistants available";


	city_information[40].city_name = "Chuadanga";
	city_information[40].city_center = "Chuadanga Sadar";
	city_information[40].tourist_spots = "Nilgiri park, local heritage sites";
	city_information[40].traveling_assistant_and_route_planner_and_information_of_this_person = "Rakib - Local guide";
	city_information[40].booking_and_ticketing_system = "Online system only";
	city_information[40].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";

	city_information[41].city_name = "Meherpur";
	city_information[41].city_center = "Meherpur Sadar";
	city_information[41].tourist_spots = "Mujibnagar Memorial, historical sites";
	city_information[41].traveling_assistant_and_route_planner_and_information_of_this_person = "Sabbir - Historical guide";
	city_information[41].booking_and_ticketing_system = "Online + Counter";
	city_information[41].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "5 assistants available";


	city_information[42].city_name = "Barisal";
	city_information[42].city_center = "Barisal Sadar";
	city_information[42].tourist_spots = "Kuakata nearby access, floating guava market";
	city_information[42].traveling_assistant_and_route_planner_and_information_of_this_person = "Jony - River tour guide";
	city_information[42].booking_and_ticketing_system = "Online + Counter";
	city_information[42].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "10 assistants available";


	city_information[43].city_name = "Bhola";
	city_information[43].city_center = "Bhola Sadar";
	city_information[43].tourist_spots = "Meghna River island areas";
	city_information[43].traveling_assistant_and_route_planner_and_information_of_this_person = "Rony - Island guide";
	city_information[43].booking_and_ticketing_system = "Online + Counter";
	city_information[43].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[44].city_name = "Jhalokati";
	city_information[44].city_center = "Jhalokati Sadar";
	city_information[44].tourist_spots = "Floating markets, river canals";
	city_information[44].traveling_assistant_and_route_planner_and_information_of_this_person = "Tuhin - Canal route guide";
	city_information[44].booking_and_ticketing_system = "Online system only";
	city_information[44].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[45].city_name = "Patuakhali";
	city_information[45].city_center = "Patuakhali Sadar";
	city_information[45].tourist_spots = "Kuakata Sea Beach";
	city_information[45].traveling_assistant_and_route_planner_and_information_of_this_person = "Shuvo - Beach guide";
	city_information[45].booking_and_ticketing_system = "Online + Counter";
	city_information[45].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "9 assistants available";


	city_information[46].city_name = "Pirojpur";
	city_information[46].city_center = "Pirojpur Sadar";
	city_information[46].tourist_spots = "Sundarbans gateway, floating market areas";
	city_information[46].traveling_assistant_and_route_planner_and_information_of_this_person = "Anik - River guide";
	city_information[46].booking_and_ticketing_system = "Online + Counter";
	city_information[46].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";


	city_information[47].city_name = "Barguna";
	city_information[47].city_center = "Barguna Sadar";
	city_information[47].tourist_spots = "Kuakata nearby coastal areas";
	city_information[47].traveling_assistant_and_route_planner_and_information_of_this_person = "Imran - Coastal guide";
	city_information[47].booking_and_ticketing_system = "Online system only";
	city_information[47].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[48].city_name = "Sylhet";
	city_information[48].city_center = "Zindabazar";
	city_information[48].tourist_spots = "Ratargul Swamp Forest, Jaflong, Tea gardens";
	city_information[48].traveling_assistant_and_route_planner_and_information_of_this_person = "Arif - Hill & tea garden guide";
	city_information[48].booking_and_ticketing_system = "Online + Counter";
	city_information[48].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "12 assistants available";


	city_information[49].city_name = "Moulvibazar";
	city_information[49].city_center = "Moulvibazar Sadar";
	city_information[49].tourist_spots = "Lawachara National Park, tea estates";
	city_information[49].traveling_assistant_and_route_planner_and_information_of_this_person = "Siam - Forest guide";
	city_information[49].booking_and_ticketing_system = "Online + Counter";
	city_information[49].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "9 assistants available";


	city_information[50].city_name = "Habiganj";
	city_information[50].city_center = "Habiganj Sadar";
	city_information[50].tourist_spots = "Rema-Kalenga forest, tea gardens";
	city_information[50].traveling_assistant_and_route_planner_and_information_of_this_person = "Rakib - Eco guide";
	city_information[50].booking_and_ticketing_system = "Online system only";
	city_information[50].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[51].city_name = "Sunamganj";
	city_information[51].city_center = "Sunamganj Sadar";
	city_information[51].tourist_spots = "Tanguar Haor, Niladri Lake";
	city_information[51].traveling_assistant_and_route_planner_and_information_of_this_person = "Nayeem - Haor guide";
	city_information[51].booking_and_ticketing_system = "Online + Counter";
	city_information[51].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "10 assistants available";


	city_information[52].city_name = "Rangpur";
	city_information[52].city_center = "Rangpur Sadar";
	city_information[52].tourist_spots = "Tajhat Palace, Carmichael College";
	city_information[52].traveling_assistant_and_route_planner_and_information_of_this_person = "Tanvir - Heritage guide";
	city_information[52].booking_and_ticketing_system = "Online + Counter";
	city_information[52].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "9 assistants available";


	city_information[53].city_name = "Gaibandha";
	city_information[53].city_center = "Gaibandha Sadar";
	city_information[53].tourist_spots = "Jamuna river area, local parks";
	city_information[53].traveling_assistant_and_route_planner_and_information_of_this_person = "Shakil - River guide";
	city_information[53].booking_and_ticketing_system = "Online system only";
	city_information[53].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[54].city_name = "Kurigram";
	city_information[54].city_center = "Kurigram Sadar";
	city_information[54].tourist_spots = "Border rivers, rural scenic beauty";
	city_information[54].traveling_assistant_and_route_planner_and_information_of_this_person = "Rafi - Border area guide";
	city_information[54].booking_and_ticketing_system = "Online + Counter";
	city_information[54].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[55].city_name = "Lalmonirhat";
	city_information[55].city_center = "Lalmonirhat Sadar";
	city_information[55].tourist_spots = "Teesta Barrage, rural river views";
	city_information[55].traveling_assistant_and_route_planner_and_information_of_this_person = "Jahid - River guide";
	city_information[55].booking_and_ticketing_system = "Online system only";
	city_information[55].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[56].city_name = "Nilphamari";
	city_information[56].city_center = "Nilphamari Sadar";
	city_information[56].tourist_spots = "Chilahati border, local parks";
	city_information[56].traveling_assistant_and_route_planner_and_information_of_this_person = "Sabbir - Local guide";
	city_information[56].booking_and_ticketing_system = "Online + Counter";
	city_information[56].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[57].city_name = "Dinajpur";
	city_information[57].city_center = "Dinajpur Sadar";
	city_information[57].tourist_spots = "Ramsagar National Park, Kantajew Temple";
	city_information[57].traveling_assistant_and_route_planner_and_information_of_this_person = "Mahin - Heritage guide";
	city_information[57].booking_and_ticketing_system = "Online + Counter";
	city_information[57].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "10 assistants available";


	city_information[58].city_name = "Thakurgaon";
	city_information[58].city_center = "Thakurgaon Sadar";
	city_information[58].tourist_spots = "Ranishankail palace, local rivers";
	city_information[58].traveling_assistant_and_route_planner_and_information_of_this_person = "Shuvo - Local guide";
	city_information[58].booking_and_ticketing_system = "Online system only";
	city_information[58].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[59].city_name = "Panchagarh";
	city_information[59].city_center = "Panchagarh Sadar";
	city_information[59].tourist_spots = "Banglabandha zero point, Himalaya view area";
	city_information[59].traveling_assistant_and_route_planner_and_information_of_this_person = "Arman - Border guide";
	city_information[59].booking_and_ticketing_system = "Online + Counter";
	city_information[59].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";


	city_information[60].city_name = "Mymensingh";
	city_information[60].city_center = "Mymensingh Sadar";
	city_information[60].tourist_spots = "Shashi Lodge, Brahmaputra river view";
	city_information[60].traveling_assistant_and_route_planner_and_information_of_this_person = "Tareq - Cultural guide";
	city_information[60].booking_and_ticketing_system = "Online + Counter";
	city_information[60].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "10 assistants available";


	city_information[61].city_name = "Jamalpur";
	city_information[61].city_center = "Jamalpur Sadar";
	city_information[61].tourist_spots = "Jamuna river areas, local parks";
	city_information[61].traveling_assistant_and_route_planner_and_information_of_this_person = "Rony - River guide";
	city_information[61].booking_and_ticketing_system = "Online system only";
	city_information[61].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "7 assistants available";


	city_information[62].city_name = "Sherpur";
	city_information[62].city_center = "Sherpur Sadar";
	city_information[62].tourist_spots = "Garo Hills foothills, rivers";
	city_information[62].traveling_assistant_and_route_planner_and_information_of_this_person = "Hasan - Hill guide";
	city_information[62].booking_and_ticketing_system = "Online + Counter";
	city_information[62].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "6 assistants available";


	city_information[63].city_name = "Netrokona";
	city_information[63].city_center = "Netrokona Sadar";
	city_information[63].tourist_spots = "Haor areas, Bijoypur hills";
	city_information[63].traveling_assistant_and_route_planner_and_information_of_this_person = "Kamal - Haor guide";
	city_information[63].booking_and_ticketing_system = "Online + Counter";
	city_information[63].the_list_of_mumber_of_per_traveling_assistant_and_their_information = "8 assistants available";

    
}

void plan_trip_min_distance(int starting_city_number, int ending_city_number, int tourist_index_number, int tourist_choice_number)
{
    int visited_node[64] = {0};
    float distances[64];
    int previous[64];
    
    for(int i = 0; i < 64; i++) {
        distances[i] = 999999;
        previous[i] = -1;
    }
    
    distances[starting_city_number] = 0;
    
    for(int count = 0; count < 63; count++) {
        int u = -1;
        float min_dist = 999999;
        
        for(int i = 0; i < 64; i++) {
            if(!visited_node[i] && distances[i] < min_dist) {
                min_dist = distances[i];
                u = i;
            }
        }
        
        if(u == -1) break;
        visited_node[u] = 1;
        
        for(int v = 0; v < 64; v++) {
            if(city_to_city_distances_matrix[u][v] > 0 && !visited_node[v]) {
                if(distances[u] + city_to_city_distances_matrix[u][v] < distances[v]) {
                    distances[v] = distances[u] + city_to_city_distances_matrix[u][v];
                    previous[v] = u;
                }
            }
        }
    }
    
    float total_distance = distances[ending_city_number];
    float total_cost = total_distance * 10 * 2;
    
    if(tourist_choice_number == 2) {
        cout << "1. Just show the distance from the starting city to ending city\n";
        cout << "2. Show the total distance and the total cost of the trip\n";
        
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice == 1) {
            cout << "The distance from the starting city to the ending city is: " << total_distance << " km\n";
        }
        else if(choice == 2) {
            cout << "Total distance: " << total_distance << " km\n";
            cout << "The total cost of the trip is: " << total_cost << " BDT\n";
        }
    }
	
    
    
	
}
void plan_all_city_trip(int starting_city_number, int tourist_index_number, int tourist_choice_number)
{
    int visited_node[64] = {0};
    float total_distance = 0, total_cost = 0;
    
    visited_node[starting_city_number] = 1;
    
    for(int i = 0; i < 63; i++) {
        int a = -1, b = -1;
        float min_dist = 999999;
        
        for(int j = 0; j < 64; j++) {
            if(visited_node[j] == 1) {
                for(int z = 0; z < 64; z++) {
                    if(visited_node[z] == 0 && city_to_city_distances_matrix[j][z] > 0 && city_to_city_distances_matrix[j][z] < min_dist) {
                        a = j;
                        b = z;
                        min_dist = city_to_city_distances_matrix[j][z];
                    }
                }
            }
        }
        
        if(a != -1 && b != -1) {
            cout << "From ";
            City(a);
            cout << " to ";
            City(b);
            cout << " distance: " << city_to_city_distances_matrix[a][b] << " km\n";
            visited_node[b] = 1;
            total_distance += city_to_city_distances_matrix[a][b];
        }
    }
    
    total_cost = total_distance * 10 * 2;
    if(tourist_choice_number == 2) {
     cout << "Total distance: " << total_distance << " km\n";
        cout << "Total cost: " << total_cost << " BDT\n";
    }
   
	
	
}

void display_city_information(int city_number)
{
    cout << "City Name: " << city_information[city_number].city_name << '\n';
    cout << "City Center: " << city_information[city_number].city_center << '\n';
    cout << "Tourist Spots: " << city_information[city_number].tourist_spots << '\n';
    cout << "Traveling Assistant: " << city_information[city_number].traveling_assistant_and_route_planner_and_information_of_this_person << '\n';
    cout << "Booking System: " << city_information[city_number].booking_and_ticketing_system << '\n';
    cout << "Assistants Info: " << city_information[city_number].the_list_of_mumber_of_per_traveling_assistant_and_their_information << '\n';
}

class city_center_info
{
public:
    string city_name;
    string city_center;
    string city_center_number[10];
    int city_no;
} city_center_info[100];

class city_all_travelassistant {
public:
    string city_name;
    int city_line_number;
    string travel_assistant_name[5];
    int travel_assistant_number[5];
} city_travel_assistant[100];

int city_travel_assistant_count = 0;
int k = 0;

void city_travel_assistant_info() {
    for(int i = 0; i < 64; i++) {
        for(int j = 0; j < 4; j++) {
            city_travel_assistant[k].city_name = city_information[i].city_name;
            city_travel_assistant[k].city_line_number = i;
            city_travel_assistant[k].travel_assistant_name[j] = "Assistant " + to_string(j+1);
            city_travel_assistant[k].travel_assistant_number[j] = 1700000000 + k*4 + j;
            if(j == 3) {
                k++;
            }
        }
    }
    city_travel_assistant_count = k;
}

class Travel_Assistant {
public:
    string name;
    string email;
    string password;
    string expertise_area;
    string city_assigned;
    string contact_number;
    string tourist_list[100][2];
    int city_number;
} traveling_assistant[100];

int total_assistant_count =63;

void main_Travel_Assistant() {
    traveling_assistant[0].name = "Tushar Rajbongshi";
    traveling_assistant[0].email = "traj98321@gmail.com";
    traveling_assistant[0].password = "123456789";
    traveling_assistant[0].expertise_area = "Tour Guide";
    traveling_assistant[0].city_assigned = "Dhaka";
    traveling_assistant[0].contact_number = "01700000000";
    traveling_assistant[0].city_number = 0;


     traveling_assistant[1].name = "Sabbir Ahmed";
traveling_assistant[1].email = "sabbir.ahmed@gmail.com";
traveling_assistant[1].password = "123456789";
traveling_assistant[1].expertise_area = "Tour Guide";
traveling_assistant[1].city_assigned = "Chittagong";
traveling_assistant[1].contact_number = "01700000001";
traveling_assistant[1].city_number = 1;

traveling_assistant[2].name = "Durjoy Sarker";
traveling_assistant[2].email = "durjoy.sarker@gmail.com";
traveling_assistant[2].password = "123456789";
traveling_assistant[2].expertise_area = "Tour Guide";
traveling_assistant[2].city_assigned = "Narayanganj";
traveling_assistant[2].contact_number = "01700000002";
traveling_assistant[2].city_number = 2;
}

void sub_Travel_Assistant() {
traveling_assistant[3].name = "Rahim Uddin";
traveling_assistant[3].email = "rahim.uddin@gmail.com";
traveling_assistant[3].password = "123456789";
traveling_assistant[3].expertise_area = "Tour Guide";
traveling_assistant[3].city_assigned = "CoxsBazar";
traveling_assistant[3].contact_number = "01700000003";
traveling_assistant[3].city_number = 3;

traveling_assistant[4].name = "Karim Hasan";
traveling_assistant[4].email = "karim.hasan@gmail.com";
traveling_assistant[4].password = "123456789";
traveling_assistant[4].expertise_area = "Tour Guide";
traveling_assistant[4].city_assigned = "Rangamati";
traveling_assistant[4].contact_number = "01700000004";
traveling_assistant[4].city_number = 4;

traveling_assistant[5].name = "Nusrat Jahan";
traveling_assistant[5].email = "nusrat.jahan@gmail.com";
traveling_assistant[5].password = "123456789";
traveling_assistant[5].expertise_area = "Tour Guide";
traveling_assistant[5].city_assigned = "Sylhet";
traveling_assistant[5].contact_number = "01700000005";
traveling_assistant[5].city_number = 5;

traveling_assistant[6].name = "Imran Hossain";
traveling_assistant[6].email = "imran.hossain@gmail.com";
traveling_assistant[6].password = "123456789";
traveling_assistant[6].expertise_area = "Tour Guide";
traveling_assistant[6].city_assigned = "Khulna";
traveling_assistant[6].contact_number = "01700000006";
traveling_assistant[6].city_number = 6;

traveling_assistant[7].name = "Fahim Islam";
traveling_assistant[7].email = "fahim.islam@gmail.com";
traveling_assistant[7].password = "123456789";
traveling_assistant[7].expertise_area = "Tour Guide";
traveling_assistant[7].city_assigned = "Barisal";
traveling_assistant[7].contact_number = "01700000007";
traveling_assistant[7].city_number = 7;

traveling_assistant[8].name = "Shakil Khan";
traveling_assistant[8].email = "shakil.khan@gmail.com";
traveling_assistant[8].password = "123456789";
traveling_assistant[8].expertise_area = "Tour Guide";
traveling_assistant[8].city_assigned = "Rajshahi";
traveling_assistant[8].contact_number = "01700000008";
traveling_assistant[8].city_number = 8;

traveling_assistant[9].name = "Tanvir Islam";
traveling_assistant[9].email = "tanvir.islam@gmail.com";
traveling_assistant[9].password = "123456789";
traveling_assistant[9].expertise_area = "Tour Guide";
traveling_assistant[9].city_assigned = "Pabna";
traveling_assistant[9].contact_number = "01700000009";
traveling_assistant[9].city_number = 9;

traveling_assistant[10].name = "Mehedi Hasan";
traveling_assistant[10].email = "mehedi.hasan@gmail.com";
traveling_assistant[10].password = "123456789";
traveling_assistant[10].expertise_area = "Tour Guide";
traveling_assistant[10].city_assigned = "Gazipur";
traveling_assistant[10].contact_number = "01700000010";
traveling_assistant[10].city_number = 10;

traveling_assistant[11].name = "Jannat Ara";
traveling_assistant[11].email = "jannat.ara@gmail.com";
traveling_assistant[11].password = "123456789";
traveling_assistant[11].expertise_area = "Tour Guide";
traveling_assistant[11].city_assigned = "Comilla";
traveling_assistant[11].contact_number = "01700000011";
traveling_assistant[11].city_number = 11;


traveling_assistant[12].name = "Rakib Hossain";
traveling_assistant[12].email = "rakib.hossain@gmail.com";
traveling_assistant[12].password = "123456789";
traveling_assistant[12].expertise_area = "Tour Guide";
traveling_assistant[12].city_assigned = "Bandarban";
traveling_assistant[12].contact_number = "01700000012";
traveling_assistant[12].city_number = 12;

traveling_assistant[13].name = "Sadia Afrin";
traveling_assistant[13].email = "sadia.afrin@gmail.com";
traveling_assistant[13].password = "123456789";
traveling_assistant[13].expertise_area = "Tour Guide";
traveling_assistant[13].city_assigned = "Bhola";
traveling_assistant[13].contact_number = "01700000013";
traveling_assistant[13].city_number = 13;

traveling_assistant[14].name = "Arif Chowdhury";
traveling_assistant[14].email = "arif.chowdhury@gmail.com";
traveling_assistant[14].password = "123456789";
traveling_assistant[14].expertise_area = "Tour Guide";
traveling_assistant[14].city_assigned = "Mymensingh";
traveling_assistant[14].contact_number = "01700000014";
traveling_assistant[14].city_number = 14;

traveling_assistant[15].name = "Naim Sheikh";
traveling_assistant[15].email = "naim.sheikh@gmail.com";
traveling_assistant[15].password = "123456789";
traveling_assistant[15].expertise_area = "Tour Guide";
traveling_assistant[15].city_assigned = "Faridpur";
traveling_assistant[15].contact_number = "01700000015";
traveling_assistant[15].city_number = 15;

traveling_assistant[16].name = "Hasan Mahmud";
traveling_assistant[16].email = "hasan.mahmud@gmail.com";
traveling_assistant[16].password = "123456789";
traveling_assistant[16].expertise_area = "Tour Guide";
traveling_assistant[16].city_assigned = "Bogura";
traveling_assistant[16].contact_number = "01700000016";
traveling_assistant[16].city_number = 16;

traveling_assistant[17].name = "Rifat Hossain";
traveling_assistant[17].email = "rifat.hossain@gmail.com";
traveling_assistant[17].password = "123456789";
traveling_assistant[17].expertise_area = "Tour Guide";
traveling_assistant[17].city_assigned = "Jessore";
traveling_assistant[17].contact_number = "01700000017";
traveling_assistant[17].city_number = 17;

traveling_assistant[18].name = "Mim Akter";
traveling_assistant[18].email = "mim.akter@gmail.com";
traveling_assistant[18].password = "123456789";
traveling_assistant[18].expertise_area = "Tour Guide";
traveling_assistant[18].city_assigned = "Dinajpur";
traveling_assistant[18].contact_number = "01700000018";
traveling_assistant[18].city_number = 18;

traveling_assistant[19].name = "Sohel Rana";
traveling_assistant[19].email = "sohel.rana@gmail.com";
traveling_assistant[19].password = "123456789";
traveling_assistant[19].expertise_area = "Tour Guide";
traveling_assistant[19].city_assigned = "Naogaon";
traveling_assistant[19].contact_number = "01700000019";
traveling_assistant[19].city_number = 19;

traveling_assistant[20].name = "Ayesha Rahman";
traveling_assistant[20].email = "ayesha.rahman@gmail.com";
traveling_assistant[20].password = "123456789";
traveling_assistant[20].expertise_area = "Tour Guide";
traveling_assistant[20].city_assigned = "Kushtia";
traveling_assistant[20].contact_number = "01700000020";
traveling_assistant[20].city_number = 20;

traveling_assistant[21].name = "Faisal Ahmed";
traveling_assistant[21].email = "faisal.ahmed@gmail.com";
traveling_assistant[21].password = "123456789";
traveling_assistant[21].expertise_area = "Tour Guide";
traveling_assistant[21].city_assigned = "Tangail";
traveling_assistant[21].contact_number = "01700000021";
traveling_assistant[21].city_number = 21;

traveling_assistant[22].name = "Nabila Sultana";
traveling_assistant[22].email = "nabila.sultana@gmail.com";
traveling_assistant[22].password = "123456789";
traveling_assistant[22].expertise_area = "Tour Guide";
traveling_assistant[22].city_assigned = "Chandpur";
traveling_assistant[22].contact_number = "01700000022";
traveling_assistant[22].city_number = 22;

traveling_assistant[23].name = "Shuvo Das";
traveling_assistant[23].email = "shuvo.das@gmail.com";
traveling_assistant[23].password = "123456789";
traveling_assistant[23].expertise_area = "Tour Guide";
traveling_assistant[23].city_assigned = "Brahmanbaria";
traveling_assistant[23].contact_number = "01700000023";
traveling_assistant[23].city_number = 23;

traveling_assistant[24].name = "Rakibul Islam";
traveling_assistant[24].email = "rakibul.islam@gmail.com";
traveling_assistant[24].password = "123456789";
traveling_assistant[24].expertise_area = "Tour Guide";
traveling_assistant[24].city_assigned = "Sherpur";
traveling_assistant[24].contact_number = "01700000024";
traveling_assistant[24].city_number = 24;

traveling_assistant[25].name = "Jahid Hasan";
traveling_assistant[25].email = "jahid.hasan@gmail.com";
traveling_assistant[25].password = "123456789";
traveling_assistant[25].expertise_area = "Tour Guide";
traveling_assistant[25].city_assigned = "Patuakhali";
traveling_assistant[25].contact_number = "01700000025";
traveling_assistant[25].city_number = 25;

traveling_assistant[26].name = "Farzana Islam";
traveling_assistant[26].email = "farzana.islam@gmail.com";
traveling_assistant[26].password = "123456789";
traveling_assistant[26].expertise_area = "Tour Guide";
traveling_assistant[26].city_assigned = "Noakhali";
traveling_assistant[26].contact_number = "01700000026";
traveling_assistant[26].city_number = 26;

traveling_assistant[27].name = "Kabir Hossain";
traveling_assistant[27].email = "kabir.hossain@gmail.com";
traveling_assistant[27].password = "123456789";
traveling_assistant[27].expertise_area = "Tour Guide";
traveling_assistant[27].city_assigned = "Khagrachari";
traveling_assistant[27].contact_number = "01700000027";
traveling_assistant[27].city_number = 27;

traveling_assistant[28].name = "Sumaiya Akter";
traveling_assistant[28].email = "sumaiya.akter@gmail.com";
traveling_assistant[28].password = "123456789";
traveling_assistant[28].expertise_area = "Tour Guide";
traveling_assistant[28].city_assigned = "Feni";
traveling_assistant[28].contact_number = "01700000028";
traveling_assistant[28].city_number = 28;

traveling_assistant[29].name = "Omar Faruk";
traveling_assistant[29].email = "omar.faruk@gmail.com";
traveling_assistant[29].password = "123456789";
traveling_assistant[29].expertise_area = "Tour Guide";
traveling_assistant[29].city_assigned = "Habiganj";
traveling_assistant[29].contact_number = "01700000029";
traveling_assistant[29].city_number = 29;

traveling_assistant[30].name = "Tania Sultana";
traveling_assistant[30].email = "tania.sultana@gmail.com";
traveling_assistant[30].password = "123456789";
traveling_assistant[30].expertise_area = "Tour Guide";
traveling_assistant[30].city_assigned = "Netrokona";
traveling_assistant[30].contact_number = "01700000030";
traveling_assistant[30].city_number = 30;

traveling_assistant[31].name = "Mahfuz Rahman";
traveling_assistant[31].email = "mahfuz.rahman@gmail.com";
traveling_assistant[31].password = "123456789";
traveling_assistant[31].expertise_area = "Tour Guide";
traveling_assistant[31].city_assigned = "Narsingdi";
traveling_assistant[31].contact_number = "01700000031";
traveling_assistant[31].city_number = 31;

traveling_assistant[32].name = "Sohanur Rahman";
traveling_assistant[32].email = "sohanur.rahman@gmail.com";
traveling_assistant[32].password = "123456789";
traveling_assistant[32].expertise_area = "Tour Guide";
traveling_assistant[32].city_assigned = "Munshiganj";
traveling_assistant[32].contact_number = "01700000032";
traveling_assistant[32].city_number = 32;

traveling_assistant[33].name = "Nayeem Islam";
traveling_assistant[33].email = "nayeem.islam@gmail.com";
traveling_assistant[33].password = "123456789";
traveling_assistant[33].expertise_area = "Tour Guide";
traveling_assistant[33].city_assigned = "Madaripur";
traveling_assistant[33].contact_number = "01700000033";
traveling_assistant[33].city_number = 33;

traveling_assistant[34].name = "Rashidul Hasan";
traveling_assistant[34].email = "rashidul.hasan@gmail.com";
traveling_assistant[34].password = "123456789";
traveling_assistant[34].expertise_area = "Tour Guide";
traveling_assistant[34].city_assigned = "Gopalganj";
traveling_assistant[34].contact_number = "01700000034";
traveling_assistant[34].city_number = 34;

traveling_assistant[35].name = "Lubna Akter";
traveling_assistant[35].email = "lubna.akter@gmail.com";
traveling_assistant[35].password = "123456789";
traveling_assistant[35].expertise_area = "Tour Guide";
traveling_assistant[35].city_assigned = "Shariatpur";
traveling_assistant[35].contact_number = "01700000035";
traveling_assistant[35].city_number = 35;

traveling_assistant[36].name = "Ashraful Islam";
traveling_assistant[36].email = "ashraful.islam@gmail.com";
traveling_assistant[36].password = "123456789";
traveling_assistant[36].expertise_area = "Tour Guide";
traveling_assistant[36].city_assigned = "Lakshmipur";
traveling_assistant[36].contact_number = "01700000036";
traveling_assistant[36].city_number = 36;

traveling_assistant[37].name = "Biplob Roy";
traveling_assistant[37].email = "biplob.roy@gmail.com";
traveling_assistant[37].password = "123456789";
traveling_assistant[37].expertise_area = "Tour Guide";
traveling_assistant[37].city_assigned = "Sunamganj";
traveling_assistant[37].contact_number = "01700000037";
traveling_assistant[37].city_number = 37;

traveling_assistant[38].name = "Sakib Hossain";
traveling_assistant[38].email = "sakib.hossain@gmail.com";
traveling_assistant[38].password = "123456789";
traveling_assistant[38].expertise_area = "Tour Guide";
traveling_assistant[38].city_assigned = "Thakurgaon";
traveling_assistant[38].contact_number = "01700000038";
traveling_assistant[38].city_number = 38;

traveling_assistant[39].name = "Jui Sultana";
traveling_assistant[39].email = "jui.sultana@gmail.com";
traveling_assistant[39].password = "123456789";
traveling_assistant[39].expertise_area = "Tour Guide";
traveling_assistant[39].city_assigned = "Panchagarh";
traveling_assistant[39].contact_number = "01700000039";
traveling_assistant[39].city_number = 39;

traveling_assistant[40].name = "Al Amin";
traveling_assistant[40].email = "alamin@gmail.com";
traveling_assistant[40].password = "123456789";
traveling_assistant[40].expertise_area = "Tour Guide";
traveling_assistant[40].city_assigned = "Nilphamari";
traveling_assistant[40].contact_number = "01700000040";
traveling_assistant[40].city_number = 40;

traveling_assistant[41].name = "Tariqul Islam";
traveling_assistant[41].email = "tariqul.islam@gmail.com";
traveling_assistant[41].password = "123456789";
traveling_assistant[41].expertise_area = "Tour Guide";
traveling_assistant[41].city_assigned = "Lalmonirhat";
traveling_assistant[41].contact_number = "01700000041";
traveling_assistant[41].city_number = 41;

traveling_assistant[42].name = "Sumi Akter";
traveling_assistant[42].email = "sumi.akter@gmail.com";
traveling_assistant[42].password = "123456789";
traveling_assistant[42].expertise_area = "Tour Guide";
traveling_assistant[42].city_assigned = "Gaibandha";
traveling_assistant[42].contact_number = "01700000042";
traveling_assistant[42].city_number = 42;

traveling_assistant[43].name = "Kamal Uddin";
traveling_assistant[43].email = "kamal.uddin@gmail.com";
traveling_assistant[43].password = "123456789";
traveling_assistant[43].expertise_area = "Tour Guide";
traveling_assistant[43].city_assigned = "Kurigram";
traveling_assistant[43].contact_number = "01700000043";
traveling_assistant[43].city_number = 43;

traveling_assistant[44].name = "Rezaul Karim";
traveling_assistant[44].email = "rezaul.karim@gmail.com";
traveling_assistant[44].password = "123456789";
traveling_assistant[44].expertise_area = "Tour Guide";
traveling_assistant[44].city_assigned = "Jamalpur";
traveling_assistant[44].contact_number = "01700000044";
traveling_assistant[44].city_number = 44;

traveling_assistant[45].name = "Nasrin Sultana";
traveling_assistant[45].email = "nasrin.sultana@gmail.com";
traveling_assistant[45].password = "123456789";
traveling_assistant[45].expertise_area = "Tour Guide";
traveling_assistant[45].city_assigned = "Chuadanga";
traveling_assistant[45].contact_number = "01700000045";
traveling_assistant[45].city_number = 45;

traveling_assistant[46].name = "Rashed Khan";
traveling_assistant[46].email = "rashed.khan@gmail.com";
traveling_assistant[46].password = "123456789";
traveling_assistant[46].expertise_area = "Tour Guide";
traveling_assistant[46].city_assigned = "Meherpur";
traveling_assistant[46].contact_number = "01700000046";
traveling_assistant[46].city_number = 46;

traveling_assistant[47].name = "Noman Ali";
traveling_assistant[47].email = "noman.ali@gmail.com";
traveling_assistant[47].password = "123456789";
traveling_assistant[47].expertise_area = "Tour Guide";
traveling_assistant[47].city_assigned = "Magura";
traveling_assistant[47].contact_number = "01700000047";
traveling_assistant[47].city_number = 47;

traveling_assistant[48].name = "Sadia Khan";
traveling_assistant[48].email = "sadia.khan@gmail.com";
traveling_assistant[48].password = "123456789";
traveling_assistant[48].expertise_area = "Tour Guide";
traveling_assistant[48].city_assigned = "Jhenaidah";
traveling_assistant[48].contact_number = "01700000048";
traveling_assistant[48].city_number = 48;

traveling_assistant[49].name = "Tanvir Hossain";
traveling_assistant[49].email = "tanvir.hossain@gmail.com";
traveling_assistant[49].password = "123456789";
traveling_assistant[49].expertise_area = "Tour Guide";
traveling_assistant[49].city_assigned = "Narail";
traveling_assistant[49].contact_number = "01700000049";
traveling_assistant[49].city_number = 49;

traveling_assistant[50].name = "Fahad Karim";
traveling_assistant[50].email = "fahad.karim@gmail.com";
traveling_assistant[50].password = "123456789";
traveling_assistant[50].expertise_area = "Tour Guide";
traveling_assistant[50].city_assigned = "Satkhira";
traveling_assistant[50].contact_number = "01700000050";
traveling_assistant[50].city_number = 50;

traveling_assistant[51].name = "Mariam Akter";
traveling_assistant[51].email = "mariam.akter@gmail.com";
traveling_assistant[51].password = "123456789";
traveling_assistant[51].expertise_area = "Tour Guide";
traveling_assistant[51].city_assigned = "Bagerhat";
traveling_assistant[51].contact_number = "01700000051";
traveling_assistant[51].city_number = 51;

traveling_assistant[52].name = "Sabbir Rahman";
traveling_assistant[52].email = "sabbir.rahman@gmail.com";
traveling_assistant[52].password = "123456789";
traveling_assistant[52].expertise_area = "Tour Guide";
traveling_assistant[52].city_assigned = "Rajbari";
traveling_assistant[52].contact_number = "01700000052";
traveling_assistant[52].city_number = 52;

traveling_assistant[53].name = "Imtiaz Ahmed";
traveling_assistant[53].email = "imtiaz.ahmed@gmail.com";
traveling_assistant[53].password = "123456789";
traveling_assistant[53].expertise_area = "Tour Guide";
traveling_assistant[53].city_assigned = "Sirajganj";
traveling_assistant[53].contact_number = "01700000053";
traveling_assistant[53].city_number = 53;

traveling_assistant[54].name = "Sharmin Sultana";
traveling_assistant[54].email = "sharmin.sultana@gmail.com";
traveling_assistant[54].password = "123456789";
traveling_assistant[54].expertise_area = "Tour Guide";
traveling_assistant[54].city_assigned = "Natore";
traveling_assistant[54].contact_number = "01700000054";
traveling_assistant[54].city_number = 54;

traveling_assistant[55].name = "Kamrul Hasan";
traveling_assistant[55].email = "kamrul.hasan@gmail.com";
traveling_assistant[55].password = "123456789";
traveling_assistant[55].expertise_area = "Tour Guide";
traveling_assistant[55].city_assigned = "Chapainawabganj";
traveling_assistant[55].contact_number = "01700000055";
traveling_assistant[55].city_number = 55;

traveling_assistant[56].name = "Jubayer Islam";
traveling_assistant[56].email = "jubayer.islam@gmail.com";
traveling_assistant[56].password = "123456789";
traveling_assistant[56].expertise_area = "Tour Guide";
traveling_assistant[56].city_assigned = "Joypurhat";
traveling_assistant[56].contact_number = "01700000056";
traveling_assistant[56].city_number = 56;

traveling_assistant[57].name = "Afreen Jahan";
traveling_assistant[57].email = "afreen.jahan@gmail.com";
traveling_assistant[57].password = "123456789";
traveling_assistant[57].expertise_area = "Tour Guide";
traveling_assistant[57].city_assigned = "Rangpur";
traveling_assistant[57].contact_number = "01700000057";
traveling_assistant[57].city_number = 57;

traveling_assistant[58].name = "Saif Ahmed";
traveling_assistant[58].email = "saif.ahmed@gmail.com";
traveling_assistant[58].password = "123456789";
traveling_assistant[58].expertise_area = "Tour Guide";
traveling_assistant[58].city_assigned = "Gaibandha";
traveling_assistant[58].contact_number = "01700000058";
traveling_assistant[58].city_number = 58;

traveling_assistant[59].name = "Nusrat Karim";
traveling_assistant[59].email = "nusrat.karim@gmail.com";
traveling_assistant[59].password = "123456789";
traveling_assistant[59].expertise_area = "Tour Guide";
traveling_assistant[59].city_assigned = "Kishoreganj";
traveling_assistant[59].contact_number = "01700000059";
traveling_assistant[59].city_number = 59;

traveling_assistant[60].name = "Rafiul Islam";
traveling_assistant[60].email = "rafiul.islam@gmail.com";
traveling_assistant[60].password = "123456789";
traveling_assistant[60].expertise_area = "Tour Guide";
traveling_assistant[60].city_assigned = "Manikganj";
traveling_assistant[60].contact_number = "01700000060";
traveling_assistant[60].city_number = 60;

traveling_assistant[61].name = "Tanjim Hasan";
traveling_assistant[61].email = "tanjim.hasan@gmail.com";
traveling_assistant[61].password = "123456789";
traveling_assistant[61].expertise_area = "Tour Guide";
traveling_assistant[61].city_assigned = "Gazipur";
traveling_assistant[61].contact_number = "01700000061";
traveling_assistant[61].city_number = 61;

traveling_assistant[62].name = "Lamia Rahman";
traveling_assistant[62].email = "lamia.rahman@gmail.com";
traveling_assistant[62].password = "123456789";
traveling_assistant[62].expertise_area = "Tour Guide";
traveling_assistant[62].city_assigned = "Narsingdi";
traveling_assistant[62].contact_number = "01700000062";
traveling_assistant[62].city_number = 62;

traveling_assistant[63].name = "Arman Hossain";
traveling_assistant[63].email = "arman.hossain@gmail.com";
traveling_assistant[63].password = "123456789";
traveling_assistant[63].expertise_area = "Tour Guide";
traveling_assistant[63].city_assigned = "Tangail";
traveling_assistant[63].contact_number = "01700000063";
traveling_assistant[63].city_number = 63;


}

void Add_Travel_Assistant() {
    cout << "Enter Name: ";
    cin >> traveling_assistant[total_assistant_count].name;
    cout << "Enter Email: ";
    cin >> traveling_assistant[total_assistant_count].email;
    cout << "Enter Password: ";
    cin >> traveling_assistant[total_assistant_count].password;
    cout << "Enter Expertise Area: ";
    cin >> traveling_assistant[total_assistant_count].expertise_area;
    cout << "Enter City Assigned: ";
    cin >> traveling_assistant[total_assistant_count].city_assigned;
    cout << "Enter Contact Number: ";
    cin >> traveling_assistant[total_assistant_count].contact_number;
    traveling_assistant[total_assistant_count].city_number = total_assistant_count + 1;
    total_assistant_count++;
    cout << "Assistant Added Successfully!\n";
}

void Update_Travel_Assistant(int i) {
    if(i < 0 || i >= total_assistant_count) {
        cout << "Invalid Assistant Index!\n";
        return;
    }
    cout << "1. Update Name\n2. Update Email\n3. Update Password\n4. Update Expertise Area\n5. Update City Assigned\n6. Update Contact Number\n7. Exit\n";
    int choice;
    while(true) {
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 1) {
            cout << "Enter new Name: ";
            cin >> traveling_assistant[i].name;
            cout << "Updated Successfully!\n";
        }
        else if(choice == 2) {
            cout << "Enter new Email: ";
            cin >> traveling_assistant[i].email;
            cout << "Updated Successfully!\n";
        }
        else if(choice == 3) {
            cout << "Enter new Password: ";
            cin >> traveling_assistant[i].password;
            cout << "Updated Successfully!\n";
        }
        else if(choice == 4) {
            cout << "Enter new Expertise Area: ";
            cin >> traveling_assistant[i].expertise_area;
            cout << "Updated Successfully!\n";
        }
        else if(choice == 5) {
            cout << "Enter new City Assigned: ";
            cin >> traveling_assistant[i].city_assigned;
            cout << "Updated Successfully!\n";
        }
        else if(choice == 6) {
            cout << "Enter new Contact Number: ";
            cin >> traveling_assistant[i].contact_number;
            cout << "Updated Successfully!\n";
        }
        else if(choice == 7) {
            return;
        }
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

void Update_Travel_Assistant() {
    string email;
    cout << "Enter assistant email to update: ";
    cin >> email;
    for(int i = 0; i < total_assistant_count; i++) {
        if(traveling_assistant[i].email == email) {
            Update_Travel_Assistant(i);
            return;
        }
    }
    cout << "Assistant not found.\n";
}

void Assistant_Login() {
    string email, current_password;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter Password: ";
    cin >> current_password;
    
    for(int i = 0; i < total_assistant_count; i++) {
        if(traveling_assistant[i].email == email && traveling_assistant[i].password == current_password) {
            cout << "Login Successful! Welcome, " << traveling_assistant[i].name << "!\n";
            cout << "1. Tourist Information\n2. Update Assistant Information\n3. Logout\n";
            
            int choice;
            while(true) {
                cout << "Enter your choice: ";
                cin >> choice;
                if(choice == 1) {
                    cout << "Tourist List:\n";
                    for(int j = 0; j < 100; j++) {
                        if(traveling_assistant[i].tourist_list[j][0] != "") {
                            cout << "Tourist Name: " << traveling_assistant[i].tourist_list[j][0] << endl;
                            cout << "Tourist Contact: " << traveling_assistant[i].tourist_list[j][1] << endl;
                            cout << "-----------------------------\n";
                        }
                    }
                }
                else if(choice == 2) {
                    Update_Travel_Assistant(i);
                }
                else if(choice == 3) {
                    cout << "Logging out...\n";
                    return;
                }
                else {
                    cout << "Invalid choice!\n";
                }
            }
        }
    }
    cout << "Invalid Email or Password!\n";
}

void city_travel_assistant_info(int city_number) {
    cout << "City: " << city_travel_assistant[city_number].city_name << endl;
    for(int i = 0; i < 4; i++) {
        cout << "Travel Assistant Name: " << city_travel_assistant[city_number].travel_assistant_name[i] << endl;
        cout << "Contact Number: " << city_travel_assistant[city_number].travel_assistant_number[i] << endl;
        cout << "-----------------------------\n";
    }
}

class Admin {
public:
    string username;
    string password;
    string contact_number;
    string email;
} admin[100];

int admin_count = 3;

void main_admin() {
    admin[0].username = "TusharRajbongshi";
    admin[0].password = "123456789";
    admin[0].contact_number = "01700000001";
    admin[0].email = "traj98321@gmail.com";
    
    admin[1].username = "TalhaRudro";
    admin[1].password = "123456789";
    admin[1].contact_number = "01700000002";
    admin[1].email = "talharudro23@gmail.com";

    admin[2].username = "DurjoySarker";
	admin[2].password = "123456789";
	admin[2].contact_number = "01639289601";
	admin[2].email = "sarkernirab39@gmail.com";

}

class Tourist {
public:
    string name;
    int nid;
    string email;
    string password;
    string contact_number;
    string tourist_user_city;
    string visited_city;
    float total_cost;
    float total_distance;
    string travel_assistant_name;
    int booking_id;
    int number_of_tourists;
} tourists[100];

int tourist_count = 0;

void view_tourist_spots(int city_number) {
    cout << "Tourist spots in " << city_information[city_number].city_name << ":\n";
    cout << city_information[city_number].tourist_spots << endl;
    cout << "City Center: " << city_information[city_number].city_center << endl;
}

void view_available_assistants(int city_number) {
    cout << "Available travel assistants in " << city_information[city_number].city_name << ":\n";
    cout << city_information[city_number].traveling_assistant_and_route_planner_and_information_of_this_person << endl;
}

void select_assistant(int tourist_index) {
    string assistant_name;
    cout << "Enter assistant name to select: ";
    cin >> assistant_name;
    tourists[tourist_index].travel_assistant_name = assistant_name;
    cout << "Assistant selected successfully!\n";
}

void booking_status(int tourist_index, int flag) {
    cout << "Booking ID: " << tourists[tourist_index].booking_id << endl;
    cout << "Tourist Name: " << tourists[tourist_index].name << endl;
    cout << "Total Cost: " << tourists[tourist_index].total_cost << " BDT" << endl;
    cout << "Travel Assistant: " << tourists[tourist_index].travel_assistant_name << endl;
}

void travel_history(int tourist_index) {
    cout << "Travel History for " << tourists[tourist_index].name << ":\n";
    cout << "Visited City: " << tourists[tourist_index].visited_city << endl;
    cout << "Total Distance: " << tourists[tourist_index].total_distance << " km" << endl;
    cout << "Total Cost: " << tourists[tourist_index].total_cost << " BDT" << endl;
}

void cancel_booking(int tourist_index) {
    if(tourist_index < 0 || tourist_index >= tourist_count) {
        cout << "Invalid tourist index." << endl;
        return;
    }
    tourists[tourist_index].visited_city = "";
    tourists[tourist_index].total_cost = 0.0;
    tourists[tourist_index].travel_assistant_name = "";
    tourists[tourist_index].booking_id = 0;
    tourists[tourist_index].number_of_tourists = 0;
    cout << "Booking cancelled successfully!\n";
}

void Add_Tourist() {
    cout << "Enter tourist name: ";
    cin >> tourists[tourist_count].name;
    cout << "Enter tourist email: ";
    cin >> tourists[tourist_count].email;
    cout << "Enter tourist NID: ";
    cin >> tourists[tourist_count].nid;
    cout << "Enter contact number: ";
    cin >> tourists[tourist_count].contact_number;
    cout << "Enter city: ";
    cin >> tourists[tourist_count].tourist_user_city;
    
    tourists[tourist_count].password = to_string(tourists[tourist_count].nid);
    tourists[tourist_count].visited_city = "";
    tourists[tourist_count].total_cost = 0.0;
    tourists[tourist_count].total_distance = 0.0;
    tourists[tourist_count].travel_assistant_name = "";
    tourists[tourist_count].booking_id = tourist_count + 1000;
    tourists[tourist_count].number_of_tourists = 1;
    tourist_count++;
    cout << "Tourist added successfully! Password is NID.\n";
}

void Delete_Tourist() {
    string name;
    cout << "Enter tourist name to delete: ";
    cin >> name;
    for(int i = 0; i < tourist_count; i++) {
        if(tourists[i].name == name) {
            for(int j = i; j < tourist_count - 1; j++) {
                tourists[j] = tourists[j+1];
            }
            tourist_count--;
            cout << "Tourist deleted successfully!\n";
            return;
        }
    }
    cout << "Tourist not found.\n";
}

void Update_Tourist() {
    string name;
    cout << "Enter tourist name to update: ";
    cin >> name;
    for(int i = 0; i < tourist_count; i++) {
        if(tourists[i].name == name) {
            cout << "1. Update name\n2. Update NID\n3. Update contact number\n4. Update city\n5. Update password\n6. Exit\n";
            int choice;
            cin >> choice;
            if(choice == 1) {
                cout << "Enter new name: ";
                cin >> tourists[i].name;
            }
            else if(choice == 2) {
                cout << "Enter new NID: ";
                cin >> tourists[i].nid;
                tourists[i].password = to_string(tourists[i].nid);
            }
            else if(choice == 3) {
                cout << "Enter new contact number: ";
                cin >> tourists[i].contact_number;
            }
            else if(choice == 4) {
                cout << "Enter new city: ";
                cin >> tourists[i].tourist_user_city;
            }
            else if(choice == 5) {
                cout << "Enter new password: ";
                cin >> tourists[i].password;
            }
            else if(choice == 6) {
                return;
            }
            cout << "Updated successfully!\n";
            return;
        }
    }
    cout << "Tourist not found.\n";
}

void view_all_tourists() {
    if(tourist_count == 0) {
        cout << "No tourists found.\n";
        return;
    }
    for(int i = 0; i < tourist_count; i++) {
        cout << "Name: " << tourists[i].name << endl;
        cout << "NID: " << tourists[i].nid << endl;
        cout << "Email: " << tourists[i].email << endl;
        cout << "Contact: " << tourists[i].contact_number << endl;
        cout << "City: " << tourists[i].tourist_user_city << endl;
        cout << "Total Cost: " << tourists[i].total_cost << endl;
        cout << "-----------------------------\n";
    }
}

void view_all_travel_assistants() {
    if(total_assistant_count == 0) {
        cout << "No travel assistants found.\n";
        return;
    }
    for(int i = 0; i < total_assistant_count; i++) {
        cout << "Name: " << traveling_assistant[i].name << endl;
        cout << "Expertise: " << traveling_assistant[i].expertise_area << endl;
        cout << "City: " << traveling_assistant[i].city_assigned << endl;
        cout << "Contact: " << traveling_assistant[i].contact_number << endl;
        cout << "-----------------------------\n";
    }
}

void Add_Admin() {
    cout << "Enter new admin username: ";
    cin >> admin[admin_count].username;
    cout << "Enter new admin password: ";
    cin >> admin[admin_count].password;
    cout << "Enter contact number: ";
    cin >> admin[admin_count].contact_number;
    cout << "Enter email: ";
    cin >> admin[admin_count].email;
    admin_count++;
    cout << "Admin added successfully!\n";
}

void Update_Admin() {
    string name;
    cout << "Enter admin username to update: ";
    cin >> name;
    for(int i = 0; i < admin_count; i++) {
        if(admin[i].username == name) {
            cout << "1. Update password\n2. Update contact\n3. Update email\n";
            int choice;
            cin >> choice;
            if(choice == 1) {
                cout << "Enter new password: ";
                cin >> admin[i].password;
            }
            else if(choice == 2) {
                cout << "Enter new contact: ";
                cin >> admin[i].contact_number;
            }
            else if(choice == 3) {
                cout << "Enter new email: ";
                cin >> admin[i].email;
            }
            cout << "Updated successfully!\n";
            return;
        }
    }
    cout << "Admin not found.\n";
}

void Delete_Admin() {
    string name;
    cout << "Enter admin username to delete: ";
    cin >> name;
    for(int i = 0; i < admin_count; i++) {
        if(admin[i].username == name) {
            for(int j = i; j < admin_count - 1; j++) {
                admin[j] = admin[j+1];
            }
            admin_count--;
            cout << "Admin deleted successfully!\n";
            return;
        }
    }
    cout << "Admin not found.\n";
}

void Delete_Travel_Assistant(string email) {
    for(int i = 0; i < total_assistant_count; i++) {
        if(traveling_assistant[i].email == email) {
            for(int j = i; j < total_assistant_count - 1; j++) {
                traveling_assistant[j] = traveling_assistant[j+1];
            }
            total_assistant_count--;
            cout << "Travel assistant deleted successfully.\n";
            return;
        }
    }
    cout << "Travel assistant not found.\n";
}

void Update_City_Information(int city_number) {
    cout << "Current City Information:\n";
    display_city_information(city_number);

    int choice;
    cout << "1. Update city name\n2. Update city center\n3. Update tourist spots\n4. Update city to city distance 5. Exit\n";
    cout << "Enter your choice: ";
    while(true) {
    cin >> choice;

    if(choice == 1) {
        cout << "Enter new city name: ";
        cin >> city_information[city_number].city_name;
    }
    else if(choice == 2) {
        cout << "Enter new city center: ";
        cin >> city_information[city_number].city_center;
    }
    else if(choice == 3) {
        cout << "Enter new tourist spots: ";
        cin.ignore();
        getline(cin, city_information[city_number].tourist_spots);
    }
    else if(choice == 4) {
        int start_city, end_city, new_distance;
        cout << "Enter start city number: ";
        cin >> start_city;
        cout << "Enter end city number: ";
        cin >> end_city;
        cout << "Enter new distance: ";
        cin >> new_distance;
        if(start_city >= 0 && start_city < 64 && end_city >= 0 && end_city < 64) {
            city_to_city_distances_matrix[start_city][end_city] = new_distance;
            city_to_city_distances_matrix[end_city][start_city] = new_distance;
            cout << "City to city distance updated successfully.\n";
        }
        else {
            cout << "Invalid city numbers.\n";
            return;
        }
    }
    else if(choice == 5) {
        return;
    }
    cout << "City information updated successfully.\n";

}
}
void Update_City_Information() {
    string city_name;
    cout << "Enter city name to update: ";
    cin >> city_name;
    for(int i = 0; i < 64; i++) {
        if(city_information[i].city_name == city_name) {
            Update_City_Information(i);
            return;
        }
    }
    cout << "City not found.\n";
}

void Admin_Login() {
    string name, current_password;
    cout << "Enter Username: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> current_password;
    
    for(int i = 0; i < admin_count; i++) {
        if(admin[i].username == name && admin[i].password == current_password) {
            cout << "Admin login successful. Welcome, " << admin[i].username << "!\n";
            cout << "1. Add admin\n2. Update admin\n3. Delete admin\n4. Update city info\n5. Add travel assistant\n";
            cout << "6. Update travel assistant\n7. Remove travel assistant\n8. Add tourist\n9. Update tourist\n";
            cout << "10. Delete tourist\n11. View all tourists\n12. View all assistants\n 13.Change tourist selected travel assistant\n 14.Logout\n";
            
            int choice;
            while(true) {
                cout << "Enter your choice: ";
                cin >> choice;
                if(choice == 1) Add_Admin();
                else if(choice == 2) Update_Admin();
                else if(choice == 3) Delete_Admin();
                else if(choice == 4) Update_City_Information();
                else if(choice == 5) Add_Travel_Assistant();
                else if(choice == 6) Update_Travel_Assistant();
                else if(choice == 7) {
                    string email;
                    cout << "Enter assistant email: ";
                    cin >> email;
                    Delete_Travel_Assistant(email);
                }
                else if(choice == 8) Add_Tourist();
                else if(choice == 9) Update_Tourist();
                else if(choice == 10) Delete_Tourist();
                else if(choice == 11) view_all_tourists();
                else if(choice == 12) view_all_travel_assistants();
                else if(choice == 13) {
                    string tourist_name, new_assistant;
                    cout << "Enter tourist name: ";
                    cin >> tourist_name;
                    cout << "Enter new assistant name: ";
                    cin >> new_assistant;
                    for(int j = 0; j < tourist_count; j++) {
                        if(tourists[j].name == tourist_name) {
                            tourists[j].travel_assistant_name = new_assistant;
                            cout << "Travel assistant updated successfully.\n";
                            return;
                        }
                    }
                    cout << "Tourist not found.\n";
                }
                else if(choice == 14) {
                    cout << "Logging out...\n";
                    return;
                }
                else cout << "Invalid choice.\n";
            }
        }
    }
    cout << "Invalid username or password.\n";
}
void Assistant_list(){
	cout<<"Assistant List: "<<endl;
	for(int i=0; i<total_assistant_count; i++)
	{
		cout<<"Name: "<<traveling_assistant[i].name<<endl;
		cout<<"Email: "<<traveling_assistant[i].email<<endl;
		cout<<"Expertise Area: "<<traveling_assistant[i].expertise_area<<endl;
		cout<<"City Assigned: "<<traveling_assistant[i].city_assigned<<endl;
		cout<<"Contact Number: "<<traveling_assistant[i].contact_number<<endl;
		cout<<"-----------------------------"<<endl;
	}
}


void city_Assistant_information(int citynumber)
{
    cout << "Available assistants for " << ":\n";

    for(int i = 0; i < 64; i++)  // total assistant = 64
    {
        if(traveling_assistant[i].city_number == citynumber)
        {
            cout << "Name: " << traveling_assistant[i].name << endl;
            cout << "Email: " << traveling_assistant[i].email << endl;
            cout << "Expertise Area: " << traveling_assistant[i].expertise_area << endl;
            cout << "Contact Number: " << traveling_assistant[i].contact_number << endl;
            cout << "-----------------------------" << endl;
        }
    }
}
void Tourist_Login() {
    string email, password;
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter password: ";
    cin >> password;
    
    for(int i = 0; i < tourist_count; i++) {
        if(tourists[i].email == email && tourists[i].password == password) {
            cout << "Login successful. Welcome, " << tourists[i].name << "!\n";
            
            while(true) {
                cout << "\n1. View tourist spots\n2. Plan trip\n3. View available assistants\n4. Select assistant\n";
                cout << "5. Booking status\n6. Travel history\n7. Update profile\n8. Cancel booking\n9. Assistant List\n10. City Assistant Information\n11.view the city List\n12.Logout\n";
                cout << "Enter your choice: ";
                int choice;
                cin >> choice;
                
                if(choice == 1) {
                    int city_num;
                    cout << "Enter city number (0-63): ";
                    cin >> city_num;
                    view_tourist_spots(city_num);
                }
                else if(choice == 2) {
                    cout << "1. Starting city to destination\n2. Visit all cities\n";
                    int trip_choice;
                    cin >> trip_choice;
                    if(trip_choice == 1) {
                        int start, dest;
                        cout << "Enter starting city number: ";
                        cin >> start;
                        cout << "Enter destination city number: ";
                        cin >> dest;
                        plan_trip_min_distance(start, dest, i, 2);
                    }
                    else if(trip_choice == 2) {
                        int start;
                        cout << "Enter starting city number: ";
                        cin >> start;
                        plan_all_city_trip(start, i, 2);
                    }
                }
                else if(choice == 3) {
                    int city_num;
                    cout << "Enter city number: ";
                    cin >> city_num;
                    view_available_assistants(city_num);
                }
                else if(choice == 4) {
                    select_assistant(i);
                }
                else if(choice == 5) {
                    booking_status(i, 0);
                }
                else if(choice == 6) {
                    travel_history(i);
                }
                else if(choice == 7) {
                    Update_Tourist();
                }
                else if(choice == 8) {
                    cancel_booking(i);
                }
                
				else if(choice == 9) {
					Assistant_list();
				}
                else if(choice == 10) {
                    int city_number;
                    cout << "Enter city number to view assistants: ";
                    cin >> city_number;
                    city_Assistant_information(city_number);
                }
               
                else if(choice == 11) {
                    cout << "City List: /n";
                    void city_number_list();
                    return;
                }
                 else if(choice == 12) {
                   
                    cout << "Logging out...\n";
                    return;
                }
                 
                else {
                    cout << "Invalid choice.\n";
                }
            }
        }
    }
    cout << "Invalid email or password.\n";
}

int main()
{
    City_Distance_Matrix_Making();
    city_Information();
    city_travel_assistant_info();
    main_Travel_Assistant();
    main_admin();
    sub_Travel_Assistant();
    
    while(true) {
        cout << "\n===== Bangladesh Tourism Management Organization =====\n";
        cout << "1. Login as Admin\n";
        cout << "2. Login as Tourist\n";
        cout << "3. Login as Travel Assistant\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        
        int choice;
        cin >> choice;
        
        if(choice == 1) {
            Admin_Login();
        }
        else if(choice == 2) {
            Tourist_Login();
        }
        else if(choice == 3) {
            Assistant_Login();
        }
        else if(choice == 4) {
            cout << "Thank you for using BTMS!\n";
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}