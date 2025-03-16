#!/bin/bash

# 获取当前目录的绝对路径
CURRENT_DIR=$(pwd)

# 设置 NEMU_HOME 和 AM_HOME
NEMU_HOME="$CURRENT_DIR/nemu"
AM_HOME="$CURRENT_DIR/abstract-machine"

# 检查目录是否存在
if [ ! -d "$NEMU_HOME" ]; then
  echo "错误: $NEMU_HOME 目录不存在！"
  exit 1
fi

if [ ! -d "$AM_HOME" ]; then
  echo "错误: $AM_HOME 目录不存在！"
  exit 1
fi

# 将设置写入 ~/.bashrc
echo "export NEMU_HOME=\"$NEMU_HOME\"" >> ~/.bashrc
echo "export AM_HOME=\"$AM_HOME\"" >> ~/.bashrc

# 提示用户
echo "已将以下内容添加到 ~/.bashrc："
echo "export NEMU_HOME=\"$NEMU_HOME\""
echo "export AM_HOME=\"$AM_HOME\""
echo "请运行 'source ~/.bashrc' 使更改生效。"