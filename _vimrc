syntax on
set nu
set ts=4
set sw=4
set si

autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -std=c++17 % -o %:r<CR>
" add a run button tho a compile and run button would be better 
