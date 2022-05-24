syntax on
set hls
set nu
set ts=4
set sw=4
set si
set cb=unnamed
" add a better font tbh

autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -std=c++17 % -o %:r<CR><CR>
autocmd filetype cpp nnoremap <F6> :!%:r <CR><CR>

autocmd filetype py nnoremap <F5> :w <bar> !py %:r <CR><CR>
"^düzelt

inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
noremap {} {}
