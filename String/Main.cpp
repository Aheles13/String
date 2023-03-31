#include <iostream>
#include <string> // Библиотека, позволяющая работать со строками С++.

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Строки - в языке прогарммирования "С" Упорядочный набор символьных элементов, объеденых в массив, в конце которого распологается нуль - терминатор.

	// Символьный массив из языка С.
	
	/*char c_str[]{'H', 'i', '!', '\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std:: cout << c_str << std::endl;
	
	char c_str2[]{ "Hello world!" };
	std::cout << c_str2 << std::endl;*/

	// Символьный массив из языка С++.
	
	// Строка - объекта класса string.
	/*std::string str;
	std::cout << str << std::endl; // Пустая строка. 
	str = "Hello world!";
	std::cout << str << std::endl; // Hello world!
	str = "Bye world!";
	std::cout << str << std::endl; // Bye world!


	// Конкатенация строк - это процесс слияния двух или более строк в одну новую.
	
	str += "!!!$$$ :3"; // Добавление текста в конец строки.
	std::cout << str + "..." << std::endl; // Bye world!!!$$$ :3...
	std::cout << str << std::endl; // Bye world!!!$$$*/

	// Ввод строки

	/*std::cout << "Привет! Имя урони по братски! \nВвод -> ";
	std::string name;
	std::cin >> name; // ввод одного слова ( до первого разделителя) 
	std::cout << "Привет, " << name << "!\n";
	std::cin.ignore();
	std::cout << "Кем работаешь?\nВвод -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Ого, " << job << "? Пахарь жёсткий\n";

	std::cout << "А сколько тебе лет?\nВвод -> ";
	int age;
	std::cin >> age;
	std::cout << "Когда ты учился, я преподовал , шкет тебе че " << age << " лет...\n ";*/

	//Методы строк.
	// Метод - спец. функция, принадлежащая какому либо объекту и применяемая исключительно этим объектом.

	std::string my_str = "Hello world!";

	/*//Методы length и size. Возвращающие 
	//std::cout << my_str.length() << std::endl; // 12
	//std::cout << my_str.size() << std::endl; // 12

	//Метод insert. Вствляющий строку в подстроку 
	//my_str.insert(3, "$$$");
	//std::cout << my_str << std::endl; //Hel$$$loo Wordl!

	//Метод replace. Заменяющий часть строки на новую. 
	//my_str.replace(3, 5, "$");
	//std::cout << my_str << std::endl; // Hel$rld!

	//Метод find, возвращающий позицию первого вхождения подстроки в строку.
	//std::cout << my_str.find("l")  << std::endl;
	//std::cout << my_str.find("l", 5) << std::endl;

	//Метод rfind, возвращающий позицию последнего вхождения в строку.
	//std::cout << my_str.rfind("o") << std::endl; // С первой позиции 
	//std::cout << my_str.rfind("o", 6) << std::endl; // С последней позиции 

	//Метод substr, возвращающий подстроку из строки.
	//std::cout << my_str.substr(4) << std::endl;
	//std::cout << my_str.substr(4,5) << std::endl;*/

	//Функции для работы со строками 
	// Функция to_string возвращющая рузультат превращения числа в строку.
	int num = 123;
	std::string num_str = std::to_string(num); // "123"
	num_str += '!'; // "123!"
	std::cout << "num_str = " << num_str << std::endl;
	//Функция stoi, возврщающая число int взятое из строки. 
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;





	return 0;
}