 " Vim settings for c++
 syntax enable
 filetype plugin indent on

 "Enable line numbers
 set number
 
 "Use syntax highlighting 
 syntax on 

 "Use spaces instead of tabs
 set expandtab
 set tabstop=4
 set shiftwidith=4

 "Enable clipboard support for copy/paste
 set clipboard=unnamedplus

 "Map F5 key to save and compile c++ file
 noremap <F5> :W<CR>:!g++ % -o %< && ./%<<CR>

 "Map F9 key to run compiled c++ program
 noremap<F9> :!./%<<CR>

 "Map F12 key to tongle paste mode (usefull for preserving indentation)
 set pastetoggle=<F!2>

