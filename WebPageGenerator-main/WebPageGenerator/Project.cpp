#include "Project.h"

using namespace std;

// ���캯����ʵ��
Project::Project(string name, string path) :name(name), path(path) {}

// getter������ʵ��
string Project::getName() {
    return name;
}

string Project::getPath() {
    return path;
}

vector<WebPage*> Project::getPages() {
    return pages;
}

// setter������ʵ��
void Project::setName(string name) {
    this->name = name;
}

void Project::setPath(string path) {
    this->path = path;
}

// ������Ա������ʵ��
void Project::add(WebPage* page) {
    pages.push_back(page);
}

void Project::insert(int index, WebPage* page) {
    pages.insert(pages.begin() + index, page);
}

void Project::remove(WebPage* page) {
    for (int i = 0; i < pages.size(); i++) {
        if (pages[i] == page) {
            pages.erase(pages.begin() + i);
            break;
        }
    }
}

void Project::removeByIndex(int index) {
    pages.erase(pages.begin() + index);
}

void Project::save() {
    for (int i = 0; i < pages.size(); i++) {
        pages[i]->save(path + "/" + pages[i]->getFilename() + ".html");
    }
}