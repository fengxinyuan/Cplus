#include "Paragraph.h"

using namespace std;

// ���캯����ʵ��
Paragraph::Paragraph(string value, string href) : value(value), href(href) {}

// getter������ʵ��
void Paragraph::setId(string id) {
    this->id = id;
}
string Paragraph::getId() {
    return id;
}
string Paragraph::getClassName() {
    return className;
}

string Paragraph::getValue() {
    return value;
}

string Paragraph::getHref() {
    return href;
}

// setter������ʵ��
void Paragraph::setValue(string value) {
    this->value = value;
}

void Paragraph::setHref(string href) {
    this->href = href;
}

// Generate HTML��ʵ��
string Paragraph::generateHTML() {
    string html = "<p>";
    html += value;
    html += "</p>";
    // add href
    if (!href.empty()) {
        html = "<a href=\"" + href + "\">" + html + "</a>";
    }
    return html;
}