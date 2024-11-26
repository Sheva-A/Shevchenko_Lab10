#include <iostream>
#include <regex>
using namespace std;

int main() {
    string text = "<div>Hello World!</div><p>Something</p><br>";
    regex html_pattern("<[^>]+>");
    smatch result;

    cout << "Searching for HTML tags\n";
    while (regex_search(text, result, html_pattern)) {
        cout << "Found tag: " << result[0] << "\n";
        text = result.suffix().str();
    }

    return 0;
}
