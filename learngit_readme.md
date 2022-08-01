# 学习Git版本控制

Day01 

 1. 新建库

 2. 新建库下`readme.md`

    Git is a distributed version control system

    Git is free software distributed under the GPL.

## 暂存区的操作说明

当改动工作区的内容后，丢弃工作区的修改，使用命令 `git checkout -- file`

当改动工作区的内容后，还提交到了暂存区，两步操作退回 第一步 `git reset HEAD <file>`即回到了第一种情形

如果已经提交到版本库时 应当版本回退 使用命令 `git reset --hard HEAD^`