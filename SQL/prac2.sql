use college;
-- DQL Command
select * from stu1;

-- describe - it describe table structure give all structure which coloum n type
desc stu1;

-- DML Commands

#insert
insert into stu1 values(101,"sam",23,"a@sff.cc");

#update
update stu1 set age=21 where id=101;

#delete
delete from stu1 where id=101;