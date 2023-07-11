#include <iostream>

double celsiusToFahr(double celsius){
    return (celsius * (9.0/5.0)) + 32.0;
}
double celsiusToKelvin(double celsius){
    return celsius + 273.15;
}
double fahrToCelsius(double fahr){
    return ((fahr - 32) * (5.0/9.0));
}
double fahrToKelvin(double fahr){
    return (fahr + 459.67) * 5.0/9.0;
}
double kelvinToCelsius(double kelvin){
    return kelvin - 273.15;
}
double kelvinToFahr(double kelvin){
    return (kelvin * (9.0/5.0)) - 459.67;
}

int main(){
    int choice;
    double temperature;

    do{
        //display choices
        std::cout << "Welcome to the Temperature Converter! Please choose what temperature you would like to conver to and from\n";
        std::cout << "1. Celsius to Fahrenheit\n";
        std::cout << "2. Celsius to Kelvin\n";
        std::cout << "3. Fahrenheit to Celsius\n";
        std::cout << "4. Fahrenheit to Kelvin\n";
        std::cout << "5. Kelvin to Celsius\n";
        std::cout << "6. Kelvin to Fahrenheit\n";
        std::cout << "7. Exit Program\n";
        std::cin >> choice;
    

        //check choice
        if (choice >= 1 && choice <= 6){
            std::cout << "Enter Temperature: ";
            std::cin >> temperature;

            double convertedTemp;
            switch(choice) {
                case 1:
                    convertedTemp = celsiusToFahr(temperature);
                    std::cout << "Converted Temperature: " << convertedTemp <<" °F\n";
                    break;
                case 2:
                    convertedTemp = celsiusToKelvin(temperature);
                    std::cout << "Converted Temperature: " << convertedTemp <<" K\n";
                    break;
                case 3:
                    convertedTemp = fahrToCelsius(temperature);
                    std::cout << "Converted Temperature: " << convertedTemp <<" °C\n";
                    break;
                case 4:
                    convertedTemp = fahrToKelvin(temperature);
                    std::cout << "Converted Temperature: " << convertedTemp <<" K\n";
                    break;
                case 5:
                    convertedTemp = kelvinToCelsius(temperature);
                    std::cout << "Converted Temperature: " << convertedTemp <<" °C\n";
                    break;
                case 6:
                    convertedTemp = kelvinToFahr(temperature);
                    std::cout << "Converted Temperature: " << convertedTemp <<" °F\n";
                    break;
            }
        }
        else if (choice != 7){
            std::cout << "Invalid Choice, please try again.\n";
        }
    }
    while (choice != 7);

    std::cout << "Exiting Program. Goodbye!\n";

    return 0;
}


