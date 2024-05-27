using namespace std;
#include <iostream>

class remotelampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i){
		return saklarNo[i];
	}
};

int main() {
	remotelampu LampuRumah;

	LampuRumah.setSaklarNo(0, "lampu Teras Rumah");
	LampuRumah.setSaklarNo(1, "Lampu Ruang Tidur");
	LampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
	LampuRumah.setSaklarNo(3, "Lampu Dapur");





}


