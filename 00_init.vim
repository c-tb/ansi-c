set smarttab expandtab tabstop=2 softtabstop=2 shiftwidth=2
set number signcolumn=number 

let g:ale_linters = {'*': ['remove_trailing_lines', 'trim_whitespace']}

let g:ale_fix_on_save = 1
let g:ale_fixers = { 'c': ['clang-format'] }

call plug#begin()
  Plug 'nvim-treesitter/nvim-treesitter'  " syntax highlighting
  Plug 'dense-analysis/ale'               " in editor warn/error
call plug#end()

tmap <Esc> <C-\><C-n>
nmap ;; :! gcc % -o %.exe && %.exe <CR>

colo habamax
hi Normal ctermbg=None
