// 영화를 나타내는 Movie 클래스 설계
// 제목 title , 감독 director, 제작사평점 score  멤버 변수 지정
#include<iostream>
#include<string>
using namespace std;

class Movie {
private:
	string title; // 제목
	string director; // 감독
	float score; // 제작사평점
public:
	Movie(string title , string director , float score);
	string getTitle(); //제목 반환
	string getDirector(); // 감독 반환
	float getScore(); // 제작사 평점 반환 
	void Print(); //모든 내용 출력 
};

Movie::Movie(string title, string director, float score)
	:title(title), director(director), score(score) {};

string Movie::getTitle() {
	return title;
}

string Movie::getDirector() {
	return director;
}

float Movie::getScore() {
	return score;
}

void Movie::Print() {
	cout << "제목 : " << getTitle() << " 감독 : " << getDirector() << " 제작사평점 : " << getScore() << endl;
}

int main() {
	Movie mov1("범죄도시" , "강윤성", 4.5);
	Movie mov2("도둑들", "최윤성", 4.7);
	Movie mov3("베테랑", "류숭완", 3.7);

	cout << "===================================================" << endl;
	cout << "영화 1"; mov1.Print();
	cout << "영화 2"; mov2.Print();
	cout << "영화 3"; mov3.Print();
	cout << "===================================================" << endl;

	float s1 = mov1.getScore();
	float s2 = mov2.getScore();
	float s3 = mov3.getScore();
	if (s1 <= s2) {
		if (s2 <= s3) {
			cout << "영화 3의 평점이 가장 높습니다." << endl;
		}
		else cout << "영화 2의 평점이 가장 높습니다." << endl;
	}
	else { 
		if (s1 <= s3) {
			cout << "영화 3의 평점이 가장 높습니다." << endl;
		}
		else cout << "영화 1의 평점이 가장 높습니다." << endl;
	}
	return 0;
}
