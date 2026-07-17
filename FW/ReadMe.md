# 说明

RN8211B是一颗单相计量SOC。

# 工具

主要使用的操作系统:

- Windows 10及更新版本:Keil MDK5开发固件程序。

## Keil MDK5

MDK5为集成开发环境，可对固件程序进行编译等

MDK5的最低版本为5.43。

推荐从MDK5 5.29升级安装MDK5，这样就可以直接支持Arm Compiler 5,否则需要手动从旧版复制ARMCC并添加至Keil中。

### 设备支持包

官方没有提供设备支持包，此处提供添加了编程算法的设备支持包：

-  [Renergy.RN8211B_DFP.1.0.1.pack]( Renergy.RN8211B_DFP.1.0.1.pack)

注意：如果双击支持包无法正常安装，请从Keil打开`Pack Installer`窗口并使用菜单`File->Import`安装。

# 官方链接

- 官网:https://www.renergy-me.com/