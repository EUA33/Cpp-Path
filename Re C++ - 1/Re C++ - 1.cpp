#include<iostream>
#include<math.h>
#include"Win_ShortCut.h"
struct String {
	const char* text;
	String(const char * Text) :text(Text) {
	}
	void show() {
		std::cout << this->text <<"\n";
	}
	void set(const char* Text) {
		text = Text ;
	}
	void add(const char* Text) {
		char* Array = new char[sizeof(text)];
		std::cout << Array << "\n\n";
		for (int i = 0; i < sizeof(text); i++)
		{		Array[i] = text[i];
		std::cout << Array << "\n\n";
		}
		for (int i = 0; i < sizeof(Text); i++)
		{
			Array[i] = Text[i];
			std::cout << Array << "\n\n";
		}
		text = Array ;
	}
};
struct Vector2f{
	float x, y;
	Vector2f(float x,float y) :x(x) ,y(y) {
	}
	void show() {
		std::cout << this->x <<","<<this->y <<"\n";
	}
	void replace(float x,float y) {
		this->x = x;
		this->y = y;
	}
	void replace(Vector2f other) {
		this->x = other.x;
		this->y = other.y;
	}
	void replacewith(float x,float y) {
		x = this->x;
		y = this->y;
	}
	void replacewith(Vector2f other) {
		other.x=this->x;
		other.y=this->y;
	}
	Vector2f operator+(Vector2f other) const {
		Vector2f result{ this->x + other.x,this->y + other.y };
		return result;
	}
	Vector2f operator-(Vector2f other) const {
		Vector2f result{ this->x - other.x,this->y - other.y };
		return result;
	}
	Vector2f operator*(Vector2f other) const {
		Vector2f result{this->x* other.x,this->y * other.y };
		return result;
	}
	Vector2f operator/(Vector2f other) const {
		Vector2f result{this->x/ other.x,this->y / other.y };
		return result;
	}
	Vector2f operator<(Vector2f other) const {
		Vector2f result(0,0);
		if (this->x < other.x)
			result.x = this->x;
		else
			result.x = other.x;

		if (this->y < other.y)
			result.y = this->y;
		else
			result.y = other.y;

		return result;
	}
	Vector2f operator>(Vector2f other) const {
		Vector2f result(0,0);
		if (this->x > other.x)
			result.x = this->x;
		else
			result.x = other.x;

		if (this->y > other.y)
			result.y = this->y;
		else
			result.y = other.y;

		return result;
	}
};
int main() {
	Win_SC SC;
	int M=128, m=128;
	int Map[128][128] = {0};
	int x, y,length=63.5;
	for (double i = 0; i < 36*(length/3*2);i++) {
		x = cos(i) * length;
		y = sin(i) * length;
		Map[(int)(M/2+y)][(int)(m / 2+x)]=1;
	}
	for (int i = 0; i < M;i++) {
		for (int o = 0; o < m; o++) {
			if (Map[i][o] == 1) {
				SC.TextColor(15, 15);
				Log("  ");
			}
			else {
				SC.TextColor();
				Log("  ");
			}

		}
	LogEnd;
	}
	std::cin.get();
	Log("End");
}