#include <iostream>

using namespace std;

class carRental{
    private:
     string brand[5] = {"Toyota", "Nissan", "Ford", "Isuzu", "Suzuki"};

     string modelToyota[5] = {"Wigo G CVT", "Vios 1.5 G CVT", "Camry 2.5 V HEV", "Corolla Altis 1.8 G GR-S CVT", "Fortuner GR-S 4x4 2.8 AT"};
     string modelNissan[5] = {"Juke", "Kicks", "Pathfinder", "Terra", "Skyline"};
     string modelFord[5] = {"Ranger Wildtrak", "Ranger Sport", "Next-Gen Territory", "Everest", "Ranger"};
     string modelIsuzu[5] = {"D-Max 3.0 4x2 LS-A AT", "D-Max 3.0 4x4 LS-E AT", "D-Max 3.0 4x4 LS-A MT", "MU-X 3.0 4x4 LS-E AT" , "MU-X 3.0 4x2 LS-A AT"};
     string modelSuzuki[5] = {"S-Presso", "Celerio", "Swift", "Dzire", "Ertiga Hybrid"};    
 
     int toyotaPrice[5] = {1200, 1300, 1400, 1500, 1600};
     int nissanPrice[5] = {1300, 1200, 1500, 1300, 1400};
     int fordPrice[5] = {1600, 1500, 1300, 1800, 1300};
     int isuzuPrice[5] = {1600, 1900, 1700, 2600, 2000};
     int suzukiPrice[5] = {1400, 1200, 1200, 1200, 1400};

    public:
     string firstName;
     string lastName;
     string address;
     string carBrand;
     string carRented;
     char gender;
     int age;
     int rentDays;
     int totalBill;
     
     void menu();
     void brandList();
     void toyotaList();
     void nissanList();
     void fordList();
     void isuzuList();
     void suzukuList();
     void renteeInfo();

};

int main (){

    carRental out;
    out.menu();

    return 0;
}

void carRental :: menu(){

    int choice;

    cout << "[1]Rent Car" << '\n';
    cout << "[2]Exit" << '\n';
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         brandList();

        break;

    case 2:

         cout << "Thank You For Visiting!";

        break;
    
    default:

         cout << "Invalid Choice!" << '\n';
         menu();

        break;
    }
}

void carRental :: brandList(){

    int choice;
    
    cout << "---------" << '\n';
    cout << "[1]Toyota" << '\n';
    cout << "[2]Nissan" << '\n';
    cout << "[3]Ford" << '\n';
    cout << "[4]Isuzu" << '\n';
    cout << "[5]Suzuku" << '\n';
    cout << "---------" << '\n';
    
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         toyotaList();

        break;

    case 2: 

         nissanList();

        break;

    case 3: 

         fordList();

        break;

    case 4:

         isuzuList();

        break;

	case 5: 

	     suzukuList();

		break;
    
    default:

         cout << "Invalid Choice!" << '\n';
         brandList();

        break;
    }
}

void carRental :: toyotaList(){

    int choice;

    cout << "-----------" << '\n';
    cout << "[1]Wigo" << '\n';
    cout << "[2]Vios" << '\n';
    cout << "[3]Camry" << '\n';
    cout << "[4]Corolla" << '\n';
    cout << "[5]Fortuner" << '\n';
    cout << "[6]Back" << '\n';
    cout << "-----------" << '\n';
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         cout << "------------------------------" << '\n';
         cout << modelToyota[0] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << toyotaPrice[0] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += toyotaPrice[0];
             carRented += modelToyota[0];
             carBrand += brand[0];
             renteeInfo();
        }

        else if (choice == 2)
        {
             toyotaList();
        }
        
        break;

    case 2: 

         cout << "------------------------------" << '\n';
         cout << modelToyota[1] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << toyotaPrice[1] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += toyotaPrice[1];
             carRented += modelToyota[1];
             carBrand += brand[0];
             renteeInfo();
        }

        else if (choice == 2)
        {
             toyotaList();
        }

        break;

    case 3:

         cout << "------------------------------" << '\n';
         cout << modelToyota[2] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << toyotaPrice[2] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += toyotaPrice[2];
             carRented += modelToyota[2];
             carBrand += brand[0];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             toyotaList();
        }

        break;
    
    case 4:

         cout << "------------------------------" << '\n';
         cout << modelToyota[3] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << toyotaPrice[3] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += toyotaPrice[3];
             carRented += modelToyota[3];
             carBrand += brand[0];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             toyotaList();
        }

        break;

    case 5:

         cout << "------------------------------" << '\n';
         cout << modelToyota[4] << '\n';
         cout << "Seating Capacity 7" << '\n';
         cout << toyotaPrice[4] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += toyotaPrice[4];
             carRented += modelToyota[4];
             carBrand += brand[0];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             toyotaList();
        }
        
        break;

    case 6: 

         brandList();

        break;
    
    default:

         cout << "Invalid Choice!" << '\n';
         toyotaList();

        break;
    }

}

void carRental :: nissanList(){

    int choice;
    
    cout << "-------------" << '\n';
    cout << "[1]Juke" << '\n';
    cout << "[2]Kicks" << '\n';
    cout << "[3]Pathfinder" << '\n';
    cout << "[4]Terra" << '\n';
    cout << "[5]Skyline" << '\n';
    cout << "[6]Back" << '\n';
    cout << "-------------" << '\n';
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         cout << "------------------------------" << '\n';
         cout << modelNissan[0] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << nissanPrice[0] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += nissanPrice[0];
             carRented += modelNissan[0];
             carBrand += brand[1];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             nissanList();
        }

        break;

    case 2: 

         cout << "------------------------------" << '\n';
         cout << modelNissan[1] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << nissanPrice[1] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += nissanPrice[1];
             carRented += modelNissan[1];
             carBrand += brand[1];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             nissanList();
        }

        break;

    case 3: 

         cout << "------------------------------" << '\n';
         cout << modelNissan[2] << '\n';
         cout << "Seating Capacity 7-8" << '\n';
         cout << nissanPrice[2] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += nissanPrice[2];
             carRented += modelNissan[2];
             carBrand += brand[1];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             nissanList();
        }

        break;

    case 4: 

         cout << "------------------------------" << '\n';
         cout << modelNissan[3] << '\n';
         cout << "Seating Capacity 7" << '\n';
         cout << nissanPrice[3] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += nissanPrice[3];
             carRented += modelNissan[3];
             carBrand += brand[1];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             nissanList();
        }

        break;

    case 5: 

         cout << "------------------------------" << '\n';
         cout << modelNissan[4] << '\n';
         cout << "Seating Capacity 2-4" << '\n';
         cout << nissanPrice[4] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += nissanPrice[4];
             carRented += modelNissan[4];
             carBrand += brand[1];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             nissanList();
        }

        break;

    case 6: 

         brandList();

        break;
    
    default:

         cout << "Invalid Choice" << '\n';
         nissanList();

        break;
    }


}

void carRental :: fordList(){

    int choice;

    cout << "------------" << '\n';
    cout << "[1]Ranger W" << '\n';
    cout << "[2]Ranger S" << '\n';
    cout << "[3]Territory" << '\n';
    cout << "[4]Everest" << '\n';
    cout << "[5]Ranger" << '\n';
    cout << "[6]Back" << '\n';
    cout << "------------" << '\n';
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         cout << "------------------------------" << '\n';
         cout << modelFord[0] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << fordPrice[0] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += fordPrice[0];
             carRented += modelFord[0];
             carBrand += brand[2];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             fordList();
        }

        break;

    case 2:

         cout << "------------------------------" << '\n';
         cout << modelFord[1] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << fordPrice[1] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += fordPrice[1];
             carRented += modelFord[1];
             carBrand += brand[2];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             fordList();
        }

        break;

    case 3: 

         cout << "------------------------------" << '\n';
         cout << modelFord[2] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << fordPrice[2] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += fordPrice[2];
             carRented += modelFord[2];
             carBrand += brand[2];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             fordList();
        }

        break;

    case 4: 

         cout << "------------------------------" << '\n';
         cout << modelFord[3] << '\n';
         cout << "Seating Capacity 7" << '\n';
         cout << fordPrice[3] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += fordPrice[3];
             carRented += modelFord[3];
             carBrand += brand[2];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             fordList();
        }

        break;

    case 5: 

         cout << "------------------------------" << '\n';
         cout << modelFord[4] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << fordPrice[4] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += fordPrice[4];
             carRented += modelFord[4];
             carBrand += brand[2];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             fordList();
        }

        break;

    case 6: 

         brandList();

        break;
    
    default:

         cout << "Invalid Choice" << '\n';
         fordList(); 

        break;
    }

}

void carRental :: isuzuList(){

    int choice;

    cout << "-----------------" << '\n';
    cout << "[1]D-Max LS-A AT " << '\n';
    cout << "[2]D-Max LS-E AT" << '\n';
    cout << "[3]D-Max LS-A MT" << '\n';
    cout << "[4]MU-X LS-E AT" << '\n';
    cout << "[5]MU-X LS-A AT" << '\n';
    cout << "[6]Exit" << '\n';
    cout << "-----------------" << '\n';
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        
         cout << "------------------------------" << '\n';
         cout << modelIsuzu[0] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << isuzuPrice[0] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += isuzuPrice[0];
             carRented += modelIsuzu[0];
             carBrand += brand[3];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             isuzuList();
        }

        break;

    case 2: 

         cout << "------------------------------" << '\n';
         cout << modelIsuzu[1] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << isuzuPrice[1] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += isuzuPrice[1];
             carRented += modelIsuzu[1];
             carBrand += brand[3];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             isuzuList();
        }

        break;

    case 3:

         cout << "------------------------------" << '\n';
         cout << modelIsuzu[2] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << isuzuPrice[2] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += isuzuPrice[2];
             carRented += modelIsuzu[2];
             carBrand += brand[3];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             isuzuList();
        }

        break;

    case 4:

         cout << "------------------------------" << '\n';
         cout << modelIsuzu[3] << '\n';
         cout << "Seating Capacity 7" << '\n';
         cout << isuzuPrice[3] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += isuzuPrice[3];
             carRented += modelIsuzu[3];
             carBrand += brand[3];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             isuzuList();
        }

        break;

    case 5: 

         cout << "------------------------------" << '\n';
         cout << modelIsuzu[4] << '\n';
         cout << "Seating Capacity 7" << '\n';
         cout << isuzuPrice[4] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += isuzuPrice[4];
             carRented += modelIsuzu[4];
             carBrand += brand[3];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             isuzuList();
        }

        break;

     case 6: 

         brandList();

        break;
    
    default:

         cout << "Invalid Choice!" << '\n';
         isuzuList();

        break;
    }

}

void carRental :: suzukuList(){

    int choice;

	cout << "-----------------" << '\n';
    cout << "[1]Hatchback S.P " << '\n';
    cout << "[2]Hatchback C." << '\n';
    cout << "[3]Hatchback S." << '\n';
    cout << "[4]Sedan D." << '\n';
    cout << "[5]MPV E.H" << '\n';
    cout << "[6]Exit" << '\n';
    cout << "-----------------" << '\n';
    cout << "Enter Choice: ";
    cin >> choice;

	switch (choice)
	{
	case 1:
		
         cout << "------------------------------" << '\n';
         cout << modelSuzuki[0] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << suzukiPrice[0] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += suzukiPrice[0];
             carRented += modelSuzuki[0];
             carBrand += brand[4];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             suzukuList();
        }

		break;

	case 2:

	     cout << "------------------------------" << '\n';
         cout << modelSuzuki[1] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << suzukiPrice[1] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += suzukiPrice[1];
             carRented += modelSuzuki[1];
             carBrand += brand[4];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             suzukuList();
        }

		break;

	case 3: 

	     cout << "------------------------------" << '\n';
         cout << modelSuzuki[2] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << suzukiPrice[2] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += suzukiPrice[2];
             carRented += modelSuzuki[2];
             carBrand += brand[4];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             suzukuList();
        }

		break;

	case 4:

	     cout << "------------------------------" << '\n';
         cout << modelSuzuki[3] << '\n';
         cout << "Seating Capacity 5" << '\n';
         cout << suzukiPrice[3] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += suzukiPrice[3];
             carRented += modelSuzuki[3];
             carBrand += brand[4];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             suzukuList();
        }

		break;

	case 5: 

	     cout << "------------------------------" << '\n';
         cout << modelSuzuki[4] << '\n';
         cout << "Seating Capacity 7" << '\n';
         cout << suzukiPrice[4] << " Php Per Day" << '\n';
         cout << "------------------------------" << '\n';
         cout << "[1]Rent" << '\n';
         cout << "[2]Back" << '\n';

         cout << "Enter Choice: ";
         cin >> choice;

        if (choice == 1)
        {
             totalBill += suzukiPrice[4];
             carRented += modelSuzuki[4];
             carBrand += brand[4];
             renteeInfo();
        }
        
        else if (choice == 2)
        {
             suzukuList();
        }

		break;

	case 6: 

	     brandList();

		break;
	
	default:

	     cout << "Invalid Choice" << '\n';
		 suzukuList();

		break;
	}

}

void carRental :: renteeInfo(){
    
    cout << "------------------" << '\n';
    cout << "Renter Information" << '\n';
    cout << "------------------" << '\n';

    cout << "Enter Your Name: ";
    getline (cin >> ws, firstName);

    cout << "Enter Your Last Name: ";
    cin >> lastName;

    cout << "Enter Your Address eg. (Bancal, Guagua, Pampanga): ";
    getline (cin >> ws, address);

    cout << "Enter Your Gender (M)if Male & (F)if Female: ";
    cin >> gender;

    cout << "Enter Your Age: ";
    cin >> age;
    
    cout << "Enter How Many Days You Want To Rent: ";
    cin >> rentDays;

    totalBill = totalBill * rentDays;

    cout << "-----------------------------------------" << '\n'; 
    cout << "Total Bill: " << totalBill << "Php" << '\n';
    cout << "--------------------------------------" << '\n';
    cout << "Name: " << firstName << " " << lastName << '\n';
    cout << "Address " << address << '\n';
    cout << "Gender: " << gender << '\n';
    cout << "Age: " << age << '\n';
    cout << "Days Of Rent: " << rentDays << " Day/s" << '\n';
    cout << "Car Name: "<< carBrand << " " << carRented << '\n';
    cout << "-----------------------------------------" << '\n';
    cout << "Thank You For Renting!" << '\n';
    cout << "-----------------------------------------" << '\n';
}
