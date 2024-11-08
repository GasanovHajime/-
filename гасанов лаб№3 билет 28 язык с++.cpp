#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  // Массив из 10 пар: температура плавления - название неметалла
  map<double, string> meltingPoints = {
    {113.5, "Бром"},
    {119, "Фосфор (белый)"},
    {176.5, "Сера"},
    {386, "Иод"},
    {-220, "Неон"},
    {-210, "Азот"},
    {-205, "Кислород"},
    {-189, "Фтор"},
    {-272, "Гелий"},
    {-218, "Ксенон"}
  };

  double meltingTemp;

  cout << "Введите температуру плавления неметалла (в градусах Цельсия): ";
  cin >> meltingTemp;

  // Поиск вхождения введенной температуры в map
  auto it = meltingPoints.find(meltingTemp);

  if (it != meltingPoints.end()) {
    cout << "Название вещества: " << it->second << endl;
  } else {
    cout << "Такой температуры плавления не найдено." << endl;
  }

  return 0;
}
