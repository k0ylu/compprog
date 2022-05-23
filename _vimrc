syntax on
set hls
set nu
set ts=4
set sw=4
set si
set cb=unnamed

autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -std=c++17 % -o %:r<CR><CR>
autocmd filetype cpp nnoremap <F6> :!%:r <CR><CR>

inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
noremap {} {}
