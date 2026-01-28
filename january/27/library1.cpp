#include<iostream>
#include<vector>
#include<string>

using namespace std;
struct Book{
    string title;
    string author;
    int year {};
    bool available{true};
};

void add_book(std::vector<Book>& lib){
    Book b{};
            
    std::cout<<"Title: ";
    std::getline(std::cin, b.title);

    std::cout<<"Author: ";
    std::getline(std::cin, b.author);

    std::cout<<"Year: ";
    std::cin>>b.year;

    std::cin.ignore(1024, '\n');
    lib.push_back(b);

    std::cout<<"Added.\n";
}

void list_books(const std::vector<Book>& lib){
    if (lib.empty()){
        std::cout<<"No books in the library.\n";
        return;
    }
    for (const auto& book: lib){
        std::cout<<"Title: "<<book.title<<", Author: "<<book.author<<", Year: "<<book.year<<'\n';
    }
}

int findBook(const std::vector<Book>& lib, const std::string& title){

}

int main()
{
    std::vector<Book> lib;

    while (true)
    {
        std::cout<< "========= Library System Menu ========="<<'\n';
        std::cout<<'\t'<<"1 Add a Book"<<'\n';
        std::cout<<'\t'<<"2 List all Books"<<'\n';
        std::cout<<'\t'<<"3 Search Books"<<'\n';
        std::cout<<'\t'<<"4 Exit"<<'\n';

        int choice {};

        std::cout<<"What is your choice: ";
        std::cin>>choice;

        if (choice<1 || choice>4){
            std::cout<<"Your input is incorrect.\n";
        }else if(choice==1){
            add_book(lib);

        }else if (choice==2){
            list_books(lib);
        }else if (choice==3){
            findBook(lib, "");
        }else{
            std::cout<<"You choose 3: Exiting the programme\n\n";
            break;
        }
    }
    return 0;
}