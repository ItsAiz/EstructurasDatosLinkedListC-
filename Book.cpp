//
// Created by jxesa on 27/11/2020.
//

#include "Book.h"

Book::Book(const std::string &title, const std::string &author, int pages) : title(title), author(author),
                                                                             pages(pages) {}

Book::~Book() {

}

const std::string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const std::string &title) {
    Book::title = title;
}

const std::string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const std::string &author) {
    Book::author = author;
}

int Book::getPages() const {
    return pages;
}

void Book::setPages(int pages) {
    Book::pages = pages;
}

std::ostream &operator<<(std::ostream &os, const Book &book) {
    os << "title: " << book.title << " author: " << book.author << " pages: " << book.pages;
    return os;
}
