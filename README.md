# Confall
A collapse clone for the console.

Compatible with Unix and Windows systems. Requires `ncurses` on Unix and `pdcurses` on Windows (may require MinGW GCC). Tested with TDM-GCC on Windows and GCC on Unix.

## Status

Very unfinished. Game engine still in development.

## Building

1. Open a terminal
2. Clone the repository from `https://github.com/Shots243/Confall.git`
3. Navigate into the repository
4. Run `make` to build the program

Use the `rebuild` rules to rebuild the game from scratch.

## Running

### Unix

* It should run properly on any terminal that supports customisable colours.
* Requires `ncurses`.

### Windows

* Run in CMD for the best experience. Powershell has wrong colours and the Windows Terminal frontend (also VSCode's) does not support custom terminal colours specified by the program.
* It *should* run without needing `pdcurses` installed (untested), but requires `pdcurses` to build.
