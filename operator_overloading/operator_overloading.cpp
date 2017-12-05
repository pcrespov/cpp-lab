#include <iostream>
#include <string>

class MyString{
public:
	MyString(const char * s) : m_Str(s){}
	void Print(std::ostream & out) const { out << m_Str; }
private:
	std::string m_Str;
};

class MyInt{
public:
	MyInt(const int & i) : m_Int(i){}
	void Print(std::ostream & out) const { out << m_Int; }
private:
	int m_Int;
};

class MyWString{
public:
	MyWString(const wchar_t * s) : m_Str(s){}
	void Print(std::wostream & out) const { out << m_Str; }
private:
	std::wstring m_Str;
};

template<class O, class T>
auto operator<<(O & out, const T & s) -> decltype(s,out)
{
	s.Print(out);
	return out;
}

template<class from, class to>
auto 

int main()
{
	std::string str = "a string";
	std::wstring wstr = L"a wstring";
	std::cout << str << std::endl;
	std::wcout << wstr << std::endl;

	MyString my_str("mystr");
	std::cout << my_str << std::endl;

	MyWString my_wstr(L"mystr");
	std::cout << my_wstr << std::endl;
	std::wcout << my_wstr << std::endl;

	MyInt my_int(1000);
	std::cout << my_int << std::endl;
}
