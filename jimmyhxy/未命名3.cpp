





if (xuanze_2 == 2)
{


cout << "" << endl;
cout << "1 50$¼üÅÌ £º¹¥»÷Á¦+10" << endl;
cout << "2 45$É±Öíµ¶£º¹¥»÷Á¦+8" << endl;
cout << "3 150$Ã°ÏÕÕßÖ®ÈÐ£º ¹¥»÷Á¦+15" << endl;
cout << "ÇëÑ¡Ôñ£º" << endl;
cin >> xuanze_3;


if (xuanze_3 == 1 && money > 50)
{
cout << "Äã¹ºÂòÁË ¼üÅÌ ÄãµÄ¹¥»÷Á¦+10" << endl;
gongjili += 10;
}
else if (xuanze_3 == 1 && money > 50)
{
cout << "¹ºÂòÊ§°Ü" << endl;
}
else if (xuanze_3 == 2 && money > 45)
{
cout << "Äã¹ºÂòÁË É±Öíµ¶ +8" << endl;
gongjili += 8;
}
else if (xuanze_3 == 2 && money < 45)
{
cout << "¹ºÂòÊ§°Ü" << endl;
}
else if (xuanze_3 == 3 && money > 150)
{
cout << "Äã¹ºÂòÁË ÏÕÕßÖ®ÈÐ£º ¹¥»÷Á¦+15" << endl;
gongjili += 15;
}
else if (xuanze_3 == 3 && money < 150)
{
cout << "¹ºÂòÊ§°Ü" << endl;
}
}
}
}




void xiaoping(int xuanze_6, int xuanze_7, int xuanze_8, int xuanze_9)
{


cout << "1 5$Ð¡ÑªÆ¿ +100µã" << endl;
cout << "2 10$ÖÐÑªÆ¿ +200µã" << endl;
cout << "3 20$´óÑªÆ¿ +300µã" << endl;
cout << "" << endl;
cout << "ÇëÑ¡Ôñ£º" << endl;
cin >> xuanze_6;
if (xuanze_6 == 1 && money > 20)
{
cout << "Äã¹»ÂòÁËÐ¡ÑªÆ¿ +100µã" << endl;
shengmingli += 100;
}
else if (xuanze_6 == 1 && money < 20)
{
cout << "¹ºÂòÊ§°Ü" << endl;
}
else if (xuanze_6 == 2 && money > 10)
{
cout << "Äã¹»ÂòÁËÖÐÑªÆ¿ +200µã" << endl;
shengmingli += 200;
}
else if (xuanze_6 == 2 && money < 10)
{
cout << "¹ºÂòÊ§°Ü" << endl;
}
else if (xuanze_6 == 3 && money > 20)
{
cout << "Äã¹ºÂòÁË´óÑªÆ¿ +300" << endl;
shengmingli += 300;
}
else if (xuanze_6 == 3 && money < 20)
{
cout << "¹ºÂòÊ§°Ü" << endl;
}




}




void daguai(int xuanze_10, int xuanze_11, int xuanze_12, int xuanze_13)
{
int g_shengming = 1500;
int g_fangyu = 30;
int g_gongji = 60;
b:
cout << "1 Ê®×ÖÕ¶" << endl;
cout << "2 ±ÀÉ½»÷" << endl;
cout << "3 ±¬Í·Ò»»÷" << endl;
cout << "4 ÍõÕßºÅÁî£º¼ª¸ñ½µÁÙ" << endl;
cout << "ÇëÑ¡Ôñ¼¼ÄÜ" << endl;
cin >> xuanze_10;
if (xuanze_10 == 1)
{
cout << "ÄãÊ¹ÓÃÁË Ê®×ÖÕ¶" << endl;
cout << "¹Ö³ÐÊÜÁËÄãµÄ¹¥»÷" << endl;
printf("¹ÖµÄÉúÃü»¹Ê£ÏÂ");
g_shengming = g_shengming - (gongjili + 10);
printf("%d", g_shengming);
cout << "Ð¡¹Ö¹¥»÷ÁËÄã" << endl;
shengmingli = shengmingli - 20;
cout << "Äãµ±Ç°µÄÉúÃü»¹Ê£" << shengmingli << endl;
if (g_shengming > 0)
{
goto b;
}
if (g_shengming < 0)
{
cout << "Äã»÷É±ÁË¹Ö" << endl;
cout << " »ñµÃ10$" << endl;
money += 10;
cout << "ÄãÏÖÔÚµÄÇ®ÓÐ£º" << money << endl;
}


}
if (xuanze_10 == 2)
{
cout << "ÄãÊ¹ÓÃÁË ±ÀÉ½»÷" << endl;
cout << "¹Ö³ÐÊÜÁËÄãµÄ¹¥»÷" << endl;
printf("¹ÖµÄÉúÃü»¹Ê£ÏÂ");
g_shengming = g_shengming - (gongjili + 30);
printf("%d", g_shengming);
cout << "Ð¡¹Ö¹¥»÷ÁËÄã" << endl;
shengmingli = shengmingli - 20;
cout << "Äãµ±Ç°µÄÉúÃü»¹Ê£" << shengmingli << endl;
if (g_shengming > 0)
{
goto b;
}
if (g_shengming < 0)
{
cout << "Äã»÷É±ÁË¹Ö" << endl;
cout << " »ñµÃ10$" << endl;
money += 10;
cout << "ÄãÏÖÔÚµÄÇ®ÓÐ£º" << money << endl;
}


}
