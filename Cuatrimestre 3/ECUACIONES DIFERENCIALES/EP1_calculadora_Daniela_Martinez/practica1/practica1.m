function varargout = practica1(varargin)
% PRACTICA1 MATLAB code for practica1.fig
%      PRACTICA1, by itself, creates a new PRACTICA1 or raises the existing
%      singleton*.
%
%      H = PRACTICA1 returns the handle to a new PRACTICA1 or the handle to
%      the existing singleton*.
%
%      PRACTICA1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in PRACTICA1.M with the given input arguments.
%
%      PRACTICA1('Property','Value',...) creates a new PRACTICA1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before practica1_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to practica1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help practica1

% Last Modified by GUIDE v2.5 10-Jul-2017 12:21:48

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @practica1_OpeningFcn, ...
                   'gui_OutputFcn',  @practica1_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before practica1 is made visible.
function practica1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to practica1 (see VARARGIN)

% Choose default command line output for practica1
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes practica1 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = practica1_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function btnLimpiar_Callback(hObject, eventdata, handles)
% hObject    handle to btnLimpiar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.fyEdit,'String', '')
set(handles.resultado,'String', '')
set(handles.prima,'String', '')

% --- Executes on button press in close.
function close_Callback(hObject, ~, handles)
% hObject    handle to close (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
close(gcbf); 



function fyEdit_Callback(hObject, eventdata, handles)
% hObject    handle to fyEdit (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of fyEdit as text
%        str2double(get(hObject,'String')) returns contents of fyEdit as a double


% --- Executes during object creation, after setting all properties.
function fyEdit_CreateFcn(hObject, eventdata, handles)
% hObject    handle to fyEdit (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in calcular.
function calcular_Callback(hObject, eventdata, handles)
% hObject    handle to calcular (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
f= get(handles.fyEdit, 'String');
funcion= char_symbolico1(f,'dy','dx');
funcion2= strcat('Dy=',char(funcion));
y= dsolve(funcion2,'x');
resultado= strcat('y=',char(y));
resultado2=diff( y);
syms y x;
set(handles.resultado, 'String', char(resultado));     
set(handles.prima, 'String', char(resultado2)); 
