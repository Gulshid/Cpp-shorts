//               4.UPDATE OPERATION
#include<fstream>
using namespace std;

int main()
{
    fstream fi("create_file.txt");

    // method 1
    fi.seekp(5);
    fi.put('T');

    // method 2
    fi.seekp(5);
    fi.write("Welcome", 7);

    fi.close();
}