package me.jcala.jmooc.entity;

import lombok.Data;

import javax.persistence.*;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

@Data
@Entity
@Table(name = "course_tb")
public class Course {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private long id;//id

    @Column(nullable = false,length = 40)
    private String  name;//课程名称

    @Column(nullable = false,columnDefinition="tinyint default 1")//1,2,3,4四个难度等级
    private int difficulty;//课程难度

    @Column(name = "chapter_list")
    @ManyToMany(cascade = {CascadeType.PERSIST, CascadeType.MERGE},fetch=FetchType.EAGER)
    private Set<Chapter> chapterList=new HashSet<>();//课程章节列表

    public Course() {
    }



    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getDifficulty() {
        return difficulty;
    }

    public void setDifficulty(int difficulty) {
        this.difficulty = difficulty;
    }

    public Set<Chapter> getChapterList() {
        return chapterList;
    }

    public void setChapterList(Set<Chapter> chapterList) {
        this.chapterList = chapterList;
    }
}
