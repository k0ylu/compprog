source $VIMRUNTIME/vimrc_example.vim
source $VIMRUNTIME/mswin.vim

set hls
set is
set cb=unnamed
set ts=4
set sw=4
set si
set nu
set rnu
set nobackup
set noundofile
set autoindent

inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}

inoremap <C-j> <Esc>

autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -std=c++14 % -o %:r -Wl,--stack,268435456<CR>
autocmd filetype cpp nnoremap <F6> :!%:r<CR>
