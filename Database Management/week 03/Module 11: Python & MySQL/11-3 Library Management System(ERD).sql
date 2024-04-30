create database StudentLibManagement;
use StudentLibManagement;

-- Drop Table student;
-- Drop Table Librarian;
-- Drop Table Book;

create table Student(
 Roll varchar(4) primary key,
 Name varchar(50)
);


create table Librarian(
 Lib_id varchar(4) primary key,
 Lib_Name varchar(50)
);

create table Book(
 Book_id varchar(4) primary key,
 Book_Name varchar(50),
 Book_Genre varchar(50)
);
drop table Borrow;
create table Borrow
(
 Who_Borrowed_Roll Varchar(4),
 Which_Book_id varchar(4),
 Borrow_Date Date,
 Return_Date Date,
 foreign key(Who_Borrowed_Roll) references Student(Roll),
 foreign key(Which_Book_ID) references Book(Book_id),
 primary key(Who_Borrowed_Roll,Which_Book_ID)
);

create table Permission
(	
	Which_Book_id varchar(4),
    Who_Permitted_Lib_id varchar(4),
	foreign key(Who_Permitted_Lib_id) references Librarian(Lib_id),
	foreign key(Which_Book_Id) references Book(Book_id),
	primary key(Which_Book_Id,Who_Permitted_Lib_id)
)

