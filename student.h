class Student {
private:
	int num;
	char name[20];
	char sex;
public:
	Student(int num,const char* name, char sex) {
		this->num = num;
		strcpy_s(this->name,sizeof(this->name), name);
		this->sex = sex;
	}
	void display();
};
