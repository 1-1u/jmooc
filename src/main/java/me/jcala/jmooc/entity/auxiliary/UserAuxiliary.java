package me.jcala.jmooc.entity.auxiliary;

import lombok.Data;

import java.io.Serializable;

@Data
public class UserAuxiliary implements Serializable{


    private static final long serialVersionUID = 7760816727611253552L;

    private long id;//id
    private String name;//用户名
    private int type;//类型。1：学生，2：老师，3：管理员
    private String avatarUrl;//头像
    private int noticeNum;//消息数量

    public UserAuxiliary(long id, String name, int type, String avatarUrl, int noticeNum) {
        this.id = id;
        this.name = name;
        this.type = type;
        this.avatarUrl = avatarUrl;
        this.noticeNum = noticeNum;
    }
}
