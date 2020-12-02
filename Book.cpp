//
// Created by jxesa on 27/11/2020.
//

#include "Book.h"
Book::Book(const std::string &id, const std::string &title, const std::string &author, int pages) : id(id),
                                                                                                    title(title),
                                                                                                    author(author),
                                                                                                    pages(pages) {

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


const std::string &Book::getId() const {
    return id;
}

void Book::setId(const std::string &id) {
    Book::id = id;
}

std::ostream &operator<<(std::ostream &os, const Book &book) {
    os << "id: " << book.id << " title: " << book.title << " author: " << book.author << " pages: " << book.pages;
    return os;
}
Book::~Book() {
}

Book::Book() {
}
