





if (xuanze_2 == 2)
{


cout << "" << endl;
cout << "1 50$���� ��������+10" << endl;
cout << "2 45$ɱ����������+8" << endl;
cout << "3 150$ð����֮�У� ������+15" << endl;
cout << "��ѡ��" << endl;
cin >> xuanze_3;


if (xuanze_3 == 1 && money > 50)
{
cout << "�㹺���� ���� ��Ĺ�����+10" << endl;
gongjili += 10;
}
else if (xuanze_3 == 1 && money > 50)
{
cout << "����ʧ��" << endl;
}
else if (xuanze_3 == 2 && money > 45)
{
cout << "�㹺���� ɱ�� +8" << endl;
gongjili += 8;
}
else if (xuanze_3 == 2 && money < 45)
{
cout << "����ʧ��" << endl;
}
else if (xuanze_3 == 3 && money > 150)
{
cout << "�㹺���� ����֮�У� ������+15" << endl;
gongjili += 15;
}
else if (xuanze_3 == 3 && money < 150)
{
cout << "����ʧ��" << endl;
}
}
}
}




void xiaoping(int xuanze_6, int xuanze_7, int xuanze_8, int xuanze_9)
{


cout << "1 5$СѪƿ +100��" << endl;
cout << "2 10$��Ѫƿ +200��" << endl;
cout << "3 20$��Ѫƿ +300��" << endl;
cout << "" << endl;
cout << "��ѡ��" << endl;
cin >> xuanze_6;
if (xuanze_6 == 1 && money > 20)
{
cout << "�㹻����СѪƿ +100��" << endl;
shengmingli += 100;
}
else if (xuanze_6 == 1 && money < 20)
{
cout << "����ʧ��" << endl;
}
else if (xuanze_6 == 2 && money > 10)
{
cout << "�㹻������Ѫƿ +200��" << endl;
shengmingli += 200;
}
else if (xuanze_6 == 2 && money < 10)
{
cout << "����ʧ��" << endl;
}
else if (xuanze_6 == 3 && money > 20)
{
cout << "�㹺���˴�Ѫƿ +300" << endl;
shengmingli += 300;
}
else if (xuanze_6 == 3 && money < 20)
{
cout << "����ʧ��" << endl;
}




}




void daguai(int xuanze_10, int xuanze_11, int xuanze_12, int xuanze_13)
{
int g_shengming = 1500;
int g_fangyu = 30;
int g_gongji = 60;
b:
cout << "1 ʮ��ն" << endl;
cout << "2 ��ɽ��" << endl;
cout << "3 ��ͷһ��" << endl;
cout << "4 ���ߺ��������" << endl;
cout << "��ѡ����" << endl;
cin >> xuanze_10;
if (xuanze_10 == 1)
{
cout << "��ʹ���� ʮ��ն" << endl;
cout << "�ֳ�������Ĺ���" << endl;
printf("�ֵ�������ʣ��");
g_shengming = g_shengming - (gongjili + 10);
printf("%d", g_shengming);
cout << "С�ֹ�������" << endl;
shengmingli = shengmingli - 20;
cout << "�㵱ǰ��������ʣ" << shengmingli << endl;
if (g_shengming > 0)
{
goto b;
}
if (g_shengming < 0)
{
cout << "���ɱ�˹�" << endl;
cout << " ���10$" << endl;
money += 10;
cout << "�����ڵ�Ǯ�У�" << money << endl;
}


}
if (xuanze_10 == 2)
{
cout << "��ʹ���� ��ɽ��" << endl;
cout << "�ֳ�������Ĺ���" << endl;
printf("�ֵ�������ʣ��");
g_shengming = g_shengming - (gongjili + 30);
printf("%d", g_shengming);
cout << "С�ֹ�������" << endl;
shengmingli = shengmingli - 20;
cout << "�㵱ǰ��������ʣ" << shengmingli << endl;
if (g_shengming > 0)
{
goto b;
}
if (g_shengming < 0)
{
cout << "���ɱ�˹�" << endl;
cout << " ���10$" << endl;
money += 10;
cout << "�����ڵ�Ǯ�У�" << money << endl;
}


}
