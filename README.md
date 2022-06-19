# ctpv

Terminal previewer

![showcase](doc/showcase.gif)

----

ctpv is an utility for previewing various files
(including images with [Überzug](https://github.com/seebye/ueberzug)).

ctpv is a remake of an awesome program named
[stpv](https://github.com/Naheel-Azawy/stpv) written in C.
stpv worked perfectly for me, except it was kinda sluggish because
it was written in POSIX shell.
ctpv is an attempt to make a faster version of stpv and add some
new features.

Originally it was made for [lf](https://github.com/gokcehan/lf)
file manager but I believe that it can be easily integrated into
other programs as well if they support previews provided by
external programs like lf does.

## Dependencies

Previewing each file type requires specific programs.
If a program is not found on the system, ctpv
will try to use another one.
Only one program is required for each file type.
For example, you only need either `elinks`, `lynx` or
`w3m` installed on your system to view HTML files.

<!-- This table is auto generated! -->
<!--TABLESTART-->
| File types | Programs |
| ---- | ---- |
| any | `exiftool` `cat` |
| archive | `atool` |
| diff | `colordiff` `delta` `diff-so-fancy` |
| directory | `ls` |
| html | `elinks` `lynx` `w3m` |
| image | `ueberzug` |
| json | `jq` |
| markdown | `mdcat` |
| odt | `libreoffice` |
| pdf | `pdftoppm` |
| text | `bat` `cat` `highlight` `source-highlight` |
| torrent | `transmission-show` |
| video | `ffmpegthumbnailer` |

<!--TABLEEND-->

## Installation

### Manual

```sh
git clone https://github.com/NikitaIvanovV/ctpv
cd ctpv
sudo make install
```

Uninstall with `sudo make uninstall`

## Integration

### lf file manager

Add these lines to your lf config
(usually located at `~/.config/lf/lfrc`):

```
set previewer ctpv
set cleaner ctpvclear
&ctpv -s $id
cmd on-quit $ctpv -e $id
```

## Documentation

Full documentation for the program can be found here:
https://nikitaivanovv.github.io/ctpv/
