
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main() {
	setlocale(LC_ALL, "rus");
	string lines[100];
	int idx = 0;
	ifstream in_file("in.txt");
	string s;
	string t;
	cout << "¬ведите слово, которое вы хотите заменить.";
	cin >> s;
	cout << "¬ведите слово, на которое вы хотите его заменить.";
	cin >> t;
	while (getline(in_file, lines[idx]))
	{

		while (lines[idx].find(s) < lines[idx].size())
		{
			lines[idx].replace(lines[idx].find(s), s.size(), t);
		}
		idx++;
	}
	for (int i = 0; i < idx; ++i)
		cout << lines[i] << endl;
	in_file.close();

	ofstream out_file("out.txt");
	for (int i = 0; i < idx; ++i)
		out_file << lines[i] << endl;
	out_file.close();

}