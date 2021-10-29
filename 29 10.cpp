//Alex Shuts П13121
#inclnd <iostream>
using namespace std;
int main() {
/*
Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня
недели, соответствующее данному числу(1 — «понедельник», 2 — «вторник» 
*/
int day;
cin >> day;
switch (day) {
case1:cout << "понедельник" << endl; break;
case2:cout << "вторник" << endl; break;
case3:cout << "среда" << endl; break;
case4:cout << "четверг" << endl; break;
case5:cout << "пятница" << endl; break;
case6:cout << "суббота" << endl; break;
case7:cout << "воскресенье" << endl; break;
default:cout<<"ошибка"<< endl;
}
/*
Case4◦
Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
февраль и т.д.).
Определить количество дней в этом месяце
для невисокосного года.*/
int day;
cin >> day;
switch (day) {
case2:cout << 28 << endl; break;
case 4;
case 6;
case 9;
case 11; cout << 30 << endl; break;
case 1;
case 3;
case 5;
case 7;
case 8;    
case 9;
case 10;
case 12; cout << 31 << endl; break
default:cout << "ошибка" << endl;
}

	return 0;
}