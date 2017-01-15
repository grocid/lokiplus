# Elementary OS Loki

![screen](imgs/lokip.png)

## Keyboard mapping
I come from the world of macOS and is used to a swap between `CTRL` and `SUPER`.

Do `nano /usr/share/X11/xkb/symbols/pc`

and add

```
key <LCTL> {    [ Super_L       ]   };
key <LWIN> {    [ Control_L     ]   };
key <RCTL> {    [ Super_R       ]   };
key <RWIN> {    [ Control_R     ]   };
```

Run

`rm -rf /var/lib/xkb/*`

[Source](http://askubuntu.com/questions/131900/how-do-i-switch-the-command-key-and-control-key-on-a-macbook-pro)

## IRC Client

![irc](imgs/irc.png)

## Wingpanel

I am not very found of the default launcher Slingshot and have decided to replace with with Albert, which is faster and more useful and not as screen estate consuming. Since I don't use it, I found it quite annoying to have the text Applications in the upper left corner.

So, I decided to remove it. Also, I put the time and date indicator on the right side, because that is how I am used to have it (bad habit, maybe).

![wallpapers](imgs/wingpanel.png)

## Wallpapers

![wallpapers](imgs/walls.png)