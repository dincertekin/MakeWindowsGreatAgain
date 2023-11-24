#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mainMenu();

void removeBloatware(int appID) {
	switch (appID) {
		case 1: {
			system("cls");
			printf("\033[0;36m[+] \033[0mUninstall everything is running...\n");
			printf(" \n");
			printf("\033[0;36m[+] \033[0mRemoving Cortana...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.549981C3F5F10* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Groovy Music...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.ZuneMusic* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Movies & TV...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.ZuneVideo* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Photos...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.Windows.Photos* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving 3D Builder...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.3DBuilder* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving People...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.People* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Your Phone...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.YourPhone* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving News...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.News* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Weather...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.BingWeather* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Maps...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.WindowsMaps* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Get Help...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.GetHelp* | Remove-AppxPackage\"");
			printf("\033[0;36m[+] \033[0mRemoving Get Started...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.Getstarted* | Remove-AppxPackage\"");
			system("pause");
			break;
		}

		case 2: {
			printf("\033[0;36m[+] \033[0mRemoving Cortana...\n");
			system("powershell -command \"Get-AppxPackage *Microsoft.549981C3F5F10* | Remove-AppxPackage\"");
			mainMenu();
			break;
		}

		default: {
			break;
		}
	}
}

void selectBloatware() {
	system("cls");
	printf("\033[0;36m[+] \033[0mWhich bloatware you want to uninstall?\n");
	printf(" \n");
	printf("\033[0;36m[1] \033[0mEverything\n");
	printf(" \n");
	printf("\033[0;36m[2] \033[0mCortana\n");
	printf("\033[0;36m[3] \033[0mGroovy Music\n");
	printf("\033[0;36m[4] \033[0mMovies & TV\n");
	printf("\033[0;36m[5] \033[0mPhotos\n");
	printf("\033[0;36m[6] \033[0m3D Builder\n");
	printf("\033[0;36m[7] \033[0mPeople\n");
	printf("\033[0;36m[8] \033[0mYour Phone\n");
	printf("\033[0;36m[9] \033[0mNews\n");
	printf("\033[0;36m[10] \033[0mWeather\n");
	printf("\033[0;36m[11] \033[0mMaps\n");
	printf("\033[0;36m[12] \033[0mGet Help\n");
	printf("\033[0;36m[13] \033[0mGet Started\n");
	printf("\033[0;36m[14] \033[0mSolitaire\n");
	printf("\033[0;36m[15] \033[0mOneNote\n");
	printf("\033[0;36m[16] \033[0mCalculator\n");
	printf("\033[0;36m[17] \033[0mMicrosoft Store\n");
	printf(" \n");
	printf("\033[0;36m[0] \033[0mBack\n");
	printf(" \n");

	int choice;
	printf("\033[0;36m[>]: \033[0m");
	scanf("%d", &choice);

	if (choice == 0) {
		system("cls");
		mainMenu();
	} else {
		removeBloatware(choice);
	}
}

void mainMenu() {
	#ifdef _WIN32
		printf("\033[0;36m[+] \033[0mWelcome to Make Windows Great Again!\n");
		printf("\033[0;36m[+] \033[0mWhat do you want to do?\n");
		printf(" \n");
		printf("\033[0;36m[1] \033[0mRemove Bloatware\n");
		// printf("\033[0;36m[2] \033[0mSet Up Privacy\n");
		printf(" \n");
		printf("\033[0;36m[0] \033[0mExit\n");
		printf(" \n");
		printf("\033[0;36m[>]: \033[0m");
		int choice;
		scanf("%d", &choice);
		if (choice == 0) {
			system("exit");
		} else if (choice == 1) {
			selectBloatware();
		// } else if (choice == 2) {
		// 	 Some codes here...
		// }
	#else
		printf("\033[0;31m[!] \033[0mYour Operating System is incompatible!")
	#endif
}

int main() {
	mainMenu();
	return 0;
}
