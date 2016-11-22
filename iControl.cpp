

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
		//改文件名
		system("ren G:\MobileFile\\a*.txt a.txt");
		
		//打开文件
		openfile.open("G:\\MobileFile\\a.txt");
		if (!openfile.is_open()){
			cout << "open failed!" << endl;
			continue;// exit(1);
		}

		//读取内容
		i = 0;
		do{
			openfile.get(a[i]);
			if (openfile.eof())break;
			i++;
		} while (!openfile.eof());
		a[i] = 0;

		//关闭并删除文件
		openfile.close();
		//system("del G:\MobileFile\\*.txt&start icontrol.exe");

		//输出内容
		i = 0;
		while (a[i])
		{
			cout << a[i];
			i++;
		}
		cout << endl;
		
		//执行命令
		system(a);
		break;
	}
	exit(1);
	return 0;
}

