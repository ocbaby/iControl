

#include"iostream"
#include"string"
#include"fstream"
#include"windows.h"
using namespace std;
int main(){
	char a[100];
	int i = 0;
	ifstream openfile;
	 
	while (1){
		Sleep(500);
		//���ļ���
		system("ren G:\MobileFile\\a*.txt a.txt");
		
		//���ļ�
		openfile.open("G:\\MobileFile\\a.txt");
		if (!openfile.is_open()){
			cout << "open failed!" << endl;
			continue;// exit(1);
		}

		//��ȡ����
		i = 0;
		do{
			openfile.get(a[i]);
			if (openfile.eof())break;
			i++;
		} while (!openfile.eof());
		a[i] = 0;

		//�رղ�ɾ���ļ�
		openfile.close();
		//system("del G:\MobileFile\\*.txt&start icontrol.exe");

		//�������
		i = 0;
		while (a[i])
		{
			cout << a[i];
			i++;
		}
		cout << endl;
		
		//ִ������
		system(a);
		break;
	}
	exit(1);
	return 0;
}

