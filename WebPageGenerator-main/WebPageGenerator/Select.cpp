#include "Select.h"

using namespace std;

// ���캯����ʵ��
Select::Select(string name, vector<string> options) : name(name), options(options) {}

// getter������ʵ��
void Select::setId(string id) {
    this->id = id;
}
string Select::getId() {
    return id;
}
string Select::getClassName() {
    return className;
}

string Select::getName() {
    return name;
}

vector<string> Select::getOptions() {
    return options;
}

// setter������ʵ��
void Select::setName(string name) {
    this->name = name;
}

void Select::setOptions(vector<string> options) {
    this->options = options;
}

// ������Ա������ʵ��
void Select::addOption(string option) {
    options.push_back(option);
}

void Select::removeOption(string option) {
    for (int i = 0; i < options.size(); i++) {
        if (options[i] == option) {
            options.erase(options.begin() + i);
            break;
        }
    }
}

void Select::removeOptionByIndex(int index) {
    options.erase(options.begin() + index);
}

void Select::insertOption(int index, string option) {
    options.insert(options.begin() + index, option);
}

void Select::removeOption(int index) {
    options.erase(options.begin() + index);
}

// Generate HTML��ʵ��
string Select::generateHTML() {
    string html = "<select name=\"" + name + "\">";
    for (int i = 0; i < options.size(); i++) {
        html += "<option value=\"" + options[i] + "\">" + options[i] + "</option>";
    }
    html += "</select>";
    return html;
}