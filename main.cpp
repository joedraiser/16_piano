#include <iostream>

int main() {
    int melody[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    std::string input;

    enum notes
    {
        DO=1,
        RE=2,
        MI=4,
        FA=8,
        SOL=16,
        LA=32,
        SI=64
    };

    for(int i=0;i<12;i++)
    {
        std::cout << "Input " << i+1 << " note: ";
        std::cin >> input;

        for(int j=0;j<input.size();j++)
        {
            switch(input[j]-'0')
            {
                case 1:
                    melody[i] |= DO;
                    break;
                case 2:
                    melody[i] |= RE;
                    break;
                case 3:
                    melody[i] |= MI;
                    break;
                case 4:
                    melody[i] |= FA;
                    break;
                case 5:
                    melody[i] |= SOL;
                    break;
                case 6:
                    melody[i] |= LA;
                    break;
                case 7:
                    melody[i] |= SI;
                    break;
            }
        }
    }

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<7;j++)
        {
            switch (melody[i] & (1 << j))
            {
                case DO:
                    std::cout << "Do";
                    break;
                case RE:
                    std::cout << "Re";
                    break;
                case MI:
                    std::cout << "Mi";
                    break;
                case FA:
                    std::cout << "Fa";
                    break;
                case SOL:
                    std::cout << "Sol";
                    break;
                case LA:
                    std::cout << "La";
                    break;
                case SI:
                    std::cout << "Si";
                    break;
            }
        }
        std::cout << std::endl;
    }

}
