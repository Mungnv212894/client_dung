static const char QWERTY[] PROGMEM = 
R"(

<!DOCTYPE html>
<html>
<head>
    <meta charset='utf-8' />
    <meta name='viewport' content='width=device-width, initial-scale=1.0'>
    <title>CTT ĐHBKHN</title>
    <link href='/Content/bootstrap.css' rel='stylesheet'>
    <link href='/Content/Site.css' rel='stylesheet'>
    <script src='/Scripts/jquery-3.4.1.js'></script>

    <style>
        /* Button used to open the contact form - fixed at the bottom of the page */
        .open-button {
            background-color: #555;
            color: white;
            padding: 16px 20px;
            border: none;
            cursor: pointer;
            opacity: 0.8;
            position: fixed;
            bottom: 23px;
            right: 28px;
            width: 280px;
        }

        /* The popup form - hidden by default */
        .form-popup {
            display: none;
            position: fixed;
            bottom: 0;
            right: 15px;
            border: 3px solid #f1f1f1;
            z-index: 9;
        }

        /* Add styles to the form container */
        .form-container {
            max-width: 300px;
            padding: 10px;
            background-color: white;
        }

            /* Full-width input fields */
            .form-container input[type=text], .form-container input[type=password] {
                width: 100%;
                padding: 15px;
                margin: 5px 0 22px 0;
                border: none;
                background: #f1f1f1;
            }

                /* When the inputs get focus, do something */
                .form-container input[type=text]:focus, .form-container input[type=password]:focus {
                    background-color: #ddd;
                    outline: none;
                }

            /* Set a style for the submit/login button */
            .form-container .btn {
                background-color: #04AA6D;
                color: white;
                padding: 16px 20px;
                border: none;
                cursor: pointer;
                width: 100%;
                margin-bottom: 10px;
                opacity: 0.8;
            }

            /* Add a red background color to the cancel button */
            .form-container .cancel {
                background-color: red;
            }

            /* Add some hover effects to buttons */
            .form-container .btn:hover, .open-button:hover {
                opacity: 1;
            }
    </style>
</head>

<body>
    <div class='wrapper'>
        <div class='header'>
            <div class='container'>
                <div class='w-left col-md-6 col-xs-12'>
                    <a href='https://ctt.hust.edu.vn/'><img src='/Images/logo.png'></a>
                </div>
                <div class='w-right col-md-6 col-xs-12'>
                    <div class='search'>
<form action='/BaiViets/SearchBaiViet' method='post'>                            <input type='text' name='strSearch' placeholder='Tìm kiếm'>
                            <img src='/Images/mask.svg'>
</form>
                    </div>
                    <div class=''>
                            <div class='logIn'>
        <div class='btn-submit'>
            <a id='loginLink' href='https://asso.hust.edu.vn/adfs/ls/?wtrealm=https%3A%2F%2Fctt.hust.edu.vn%2F&wctx=WsFedOwinState%3DDuNr3hbm4Ne4GNNtLx4f4_Dt54ECMPwvbdtOJzi1bGT5S4pDTqU0pREWhJY-fbdCgqP65IoohcbJRcFhqWwktsYO6YaZANjvpwfllWoYFgiqj5bLNOTjicl72xHxFcNG3aVCHfLWPOwIAO2bkXJGaA&wa=wsignin1.0&wreply=https%3A%2F%2Fctt.hust.edu.vn%2F'>
                Đăng nhập
            </a>
        </div>
    </div>
    <div class='logIn'>
        <div class='btn-submit'>
            <a id='loginLink' href='https://ctt-sis.hust.edu.vn'>
                Dành cho phụ huynh
            </a>
        </div>
    </div>

                    </div>
                </div>
            </div>
        </div>
        <div id='menu'>
            <div class='navigation'>
                <div class='container'>
                    <div class='navbar-header'>
                        <button type='button' class='navbar-toggle' data-toggle='collapse' data-target='.navbar-collapse'>
                            <span class='icon-bar'></span>
                            <span class='icon-bar'></span>
                            <span class='icon-bar'></span>
                        </button>
                    </div>
                    <div class='navbar-collapse collapse' id='myNavbar'>
                        <ul class='nav navbar-nav'>
                            <li class='dropdown' id='trangchu'><a href='/'>Trang chủ</a><div class='pseudo_after'></div></li>
                            <li class='dropdown' id='thongbao'>
                                <a href='#' class='activeMenu'>Thông báo</a>
                                <ul class='child-menu dropdown-menu'>
                                    <li><a href='/DisplayWeb/DisplayListBaiViet?tag=ĐTĐH'>Đại học</a></li>
                                    <li><a href='/DisplayWeb/DisplayListBaiViet?tag=ĐTSĐH'>Sau đại học</a></li>
                                    <li><a href='/DisplayWeb/DisplayListBaiViet?tag=VLVH'>Vừa làm vừa học</a></li>
                                </ul>
                            </li>
							
                            <!-- <li class='dropdown' id='kehoach'> -->
                                <!-- <a href='#' class='activeMenu'>Kế hoạch</a> -->
                                <!-- <ul class='child-menu dropdown-menu'> -->
                                    <!-- <li><a href='/DisplayWeb/DisplayListKeHoach?tag=ĐTĐH'>Đại học</a></li> -->
                                    <!-- <li><a href='/DisplayWeb/DisplayListKeHoach?tag=ĐTSĐH'>Sau đại học</a></li> -->
                                    <!-- <li><a href='/DisplayWeb/DisplayListKeHoach?tag=VLVH'>Vừa làm vừa học</a></li> -->
                                <!-- </ul> -->
                            <!-- </li> -->
                            <li class='dropdown' id='quydinh'>
                                <a href='#' class='activeMenu'>Quy định</a>
                                <ul class='child-menu dropdown-menu'>
                                    <li><a href='/DisplayWeb/DisplayQuyChe?tag=ĐTĐH'>Đại học</a></li>
                                    <li><a href='/DisplayWeb/DisplayQuyChe?tag=ĐTSĐH'>Sau đại học</a></li>
                                    <li><a href='/DisplayWeb/DisplayQuyChe?tag=VLVH'>Vừa làm vừa học</a></li>
                                    
                                    <li><a href='/DisplayWeb/DisplayMenu?menu=13'>Biểu mẫu</a></li>
                                </ul>
                            </li>
							<li class='dropdown' id='sotay'>
                                <a href='https://sv-ctt.hust.edu.vn/#/so-tay-sv'>Sổ tay</a>
                            </li>
                            <li class='dropdown' id='dichvu'>
                                <a href='/Services'>Dịch vụ</a>
                            </li>
							<li class='dropdown' id='nhaphoc'>
                                <a href='https://sv-ctt.hust.edu.vn/#/nhap-hoc'>Nhập học</a>
                                
                            </li>
                            <li class='dropdown' id='tracuuvanbang'>
                                <a href='https://ctt-sis.hust.edu.vn/pub/SearchGraduation.aspx'>Tra cứu</a>
                                
                            </li>
                            <li class='dropdown' id='lienhe'>
                                <a href='/DisplayWeb/DisplayMenu?menu=2058'>Li&#234;n hệ</a>
                            </li>
                        </ul>
                    </div>
                </div>
            </div>
        </div>
        <div class='body'>
            



<div class='home'>
    <div class='slideAnh'>

        <img src='/Images/slides/img1.jpg' class='slide'>
        <img src='Images/slides/img2.jpg' class='slide'>
        <img src='Images/slides/img3.jpg' class='slide'>
    </div>
    <div class='warpper'>
        <input class='radio' id='tonghop' name='group' type='radio' checked>
        <input class='radio' id='daotaodaihoc' name='group' type='radio'>
        <input class='radio' id='daotaosaudaihoc' name='group' type='radio'>
        <input class='radio' id='contacsinhvien' name='group' type='radio'>
        <div class='tabs'>
            <div class='container'>
                <label class='tab tongHop' id='tonghop-tab' for='tonghop'>Tổng hợp</label>
                <label class='tab daiHoc' id='daotaodaihoc-tab' for='daotaodaihoc'>Đào tạo đại học</label>
                <label class='tab sauDaiHoc' id='daotaosaudaihoc-tab' for='daotaosaudaihoc'>Đào tạo sau đại học</label>
                <label class='tab congTacSinhVien' id='contacsinhvien-tab' for='contacsinhvien'>Vừa làm vừa học</label>
            </div>
        </div>
        <div class='panels'>
            <div class='container'>
                <div class='panel' id='tonghop-panel'>
                    <div class='info w-left'>
                        <h3>KẾ HOẠCH</h3>
                        <div class='content' id='tabs-1'>
                                <div class='item'>
                                    <div class='item-content item-left date'>
                                        <p class='month'>Tháng  10</p>
                                        <p class='date'> 28</p>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayKehoach?kehoach=25176'>
                                            <p class='title'>
                                                <b>[DTDH]</b> LỊCH THI GIỮA KỲ - CUỐI KỲ HỌC KỲ 20231-A-AB-B
                                            </p>
                                            <p class='datetime'>28.10.2023</p>
                                        </a>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left date'>
                                        <p class='month'>Tháng  10</p>
                                        <p class='date'> 09</p>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayKehoach?kehoach=25175'>
                                            <p class='title'>
                                                <b>[ĐTĐH]</b> Kế hoạch mở đăng k&#253; x&#233;t tốt nghiệp kỳ h&#232; 20223
                                            </p>
                                            <p class='datetime'>09/10/2023</p>
                                        </a>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left date'>
                                        <p class='month'>Tháng  10</p>
                                        <p class='date'> 03</p>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayKehoach?kehoach=25173'>
                                            <p class='title'>
                                                <b>[DTDH]</b> KẾ HOẠCH NỘP HỌC PH&#205; KỲ 1 NĂM HỌC 2023-2024 (20231)- ĐỢT 1
                                            </p>
                                            <p class='datetime'>03.10.2023</p>
                                        </a>
                                    </div>
                                </div>
                            
                        </div>
                    </div>
                    <div class='info w-right'>
                        <h3>TIN TỨC</h3>
                        <div class='content' id='tabs-2'>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=42393'>
                                            
                                            <p class='title'><b>[CTSV]</b>Chương tr&#236;nh học bổng Vietchem năm 2023</p>
                                        </a>
                                        <p class='datetime'>6/11/2023</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=42392'>
                                            
                                            <p class='title'><b>[CTSV]</b>SEKISHO JOB FAIR 2023</p>
                                        </a>
                                        <p class='datetime'>31/10/2023</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=42391'>
                                            
                                            <p class='title'><b>[ĐTĐH]</b>Th&#244;ng b&#225;o về việc thu ph&#237; dịch vụ Viettel Pay, Mobile Money từ 01/11/2023</p>
                                        </a>
                                        <p class='datetime'>31/10/2023</p>
                                    </div>
                                </div>
                            
                        </div>
                    </div>
                </div>
                <div class='panel' id='daotaodaihoc-panel'>
                    <div class='info w-left'>
                        <h3>KẾ HOẠCH</h3>
                        <div class='content' id='tabs-3'>
                                <div class='item'>
                                    <div class='item-content item-left date'>
                                        <p class='month'>Tháng  10</p>
                                        <p class='date'> 28</p>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayKehoach?kehoach=25176'>
                                            <p class='title'>
                                                <b>[DTDH]</b> LỊCH THI GIỮA KỲ - CUỐI KỲ HỌC KỲ 20231-A-AB-B
                                            </p>
                                            <p class='datetime'>28.10.2023</p>
                                        </a>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left date'>
                                        <p class='month'>Tháng  10</p>
                                        <p class='date'> 09</p>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayKehoach?kehoach=25175'>
                                            <p class='title'>
                                                <b>[ĐTĐH]</b> Kế hoạch mở đăng k&#253; x&#233;t tốt nghiệp kỳ h&#232; 20223
                                            </p>
                                            <p class='datetime'>09/10/2023</p>
                                        </a>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left date'>
                                        <p class='month'>Tháng  10</p>
                                        <p class='date'> 03</p>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayKehoach?kehoach=25173'>
                                            <p class='title'>
                                                <b>[DTDH]</b> KẾ HOẠCH NỘP HỌC PH&#205; KỲ 1 NĂM HỌC 2023-2024 (20231)- ĐỢT 1
                                            </p>
                                            <p class='datetime'>03.10.2023</p>
                                        </a>
                                    </div>
                                </div>
                            

                        </div>
                    </div>
                    <div class='info w-right'>
                        <h3>TIN TỨC</h3>
                        <div class='content' id='tabs-4'>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=42393'>
                                            
                                            <p class='title'><b>[CTSV]</b>Chương tr&#236;nh học bổng Vietchem năm 2023</p>
                                        </a>
                                        <p class='datetime'>6/11/2023</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=42392'>
                                            
                                            <p class='title'><b>[CTSV]</b>SEKISHO JOB FAIR 2023</p>
                                        </a>
                                        <p class='datetime'>31/10/2023</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=42391'>
                                            
                                            <p class='title'><b>[ĐTĐH]</b>Th&#244;ng b&#225;o về việc thu ph&#237; dịch vụ Viettel Pay, Mobile Money từ 01/11/2023</p>
                                        </a>
                                        <p class='datetime'>31/10/2023</p>
                                    </div>
                                </div>
                            
                        </div>
                    </div>
                </div>
                <div class='panel' id='daotaosaudaihoc-panel'>
                    <div class='info w-left'>
                        <h3>KẾ HOẠCH</h3>
                        <div class='content' id='tabs-5'>
                                <div class='item'>
                                    <div class='item-content item-left date'>
                                        <p class='month'>Tháng  10</p>
                                        <p class='date'> 07</p>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayKehoach?kehoach=25096'>
                                            <p class='title'>
                                                <b>[DTDH]</b> Th&#244;ng b&#225;o kiểm tra tiếng anh đầu v&#224;o K65 (d&#224;nh cho sinh vi&#234;n Chương tr&#236;nh ti&#234;n tiến v&#224; quốc tế)
                                            </p>
                                            <p class='datetime'>07/10/2020</p>
                                        </a>
                                    </div>
                                </div>
                            

                        </div>
                    </div>
                    <div class='info w-right'>
                        <h3>TIN TỨC</h3>
                        <div class='content' id='tabs-6'>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=39136'>
                                            
                                            <p class='title'><b>[ĐTSĐH]</b>Bảo vệ luận &#225;n Tiến sĩ cấp Trường cho nghi&#234;n cứu sinh Mai Văn Chung</p>
                                        </a>
                                        <p class='datetime'>20/12/2021</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=39134'>
                                            
                                            <p class='title'><b>[ĐTSĐH]</b>Bảo vệ luận &#225;n Tiến sĩ cấp Trường cho nghi&#234;n cứu sinh Trần Thị Ngọc Hoa</p>
                                        </a>
                                        <p class='datetime'>16/12/2021</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=39133'>
                                            
                                            <p class='title'><b>[ĐTSĐH]</b> Luận &#225;n tiến sĩ: Ứng dụng điều khiển th&#237;ch nghi hệ thiếu cơ cấu chấp h&#224;nh cho xe tự h&#224;nh ba b&#225;nh - NCS Phạm Thị Hương Sen</p>
                                        </a>
                                        <p class='datetime'>16/12/2021</p>
                                    </div>
                                </div>
                            
                        </div>
                    </div>
                </div>
                <div class='panel' id='contacsinhvien-panel'>
                    <div class='info w-left'>
                        <h3>KẾ HOẠCH</h3>
                        <div class='content' id='tabs-7'>
                            

                        </div>
                    </div>
                    <div class='info w-right'>
                        <h3>TIN TỨC</h3>
                        <div class='content' id='tabs-8'>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=38097'>
                                            
                                            <p class='title'><b>[VĐTLT]</b>BIỂU ĐỒ KẾ HOẠCH HỌC TẬP NĂM HỌC 2022-2023</p>
                                        </a>
                                        <p class='datetime'>17/9/2022</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=38096'>
                                            
                                            <p class='title'><b>[VĐTLT]</b>Quy chế đ&#224;o tạo vừa l&#224;m vừa học tr&#236;nh độ đại học</p>
                                        </a>
                                        <p class='datetime'>5/10/2021</p>
                                    </div>
                                </div>
                                <div class='item'>
                                    <div class='item-content item-left img'>
                                        <img src='Images/news-1.jpg'>
                                    </div>
                                    <div class='item-content item-right'>
                                        <a href='/DisplayWeb/DisplayBaiViet?baiviet=38051'>
                                            
                                            <p class='title'><b>[VĐTLT]</b>TUYỂN SINH KH&#211;A HỌC BỒI DƯỠNG TIẾNG ANH</p>
                                        </a>
                                        <p class='datetime'>6/8/2021</p>
                                    </div>
                                </div>
                            
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>

<script>
    var indexValue = 0;
    function slideShow() {
        setTimeout(slideShow, 2500);
        var x;
        const img = document.getElementsByClassName('slide');
        for (x = 0; x < img.length; x++) {
            img[x].style.display = 'none';
        }
        indexValue++;
        if (indexValue > img.length) { indexValue = 1 }
        img[indexValue - 1].style.display = 'block';
    }
    slideShow();
</script>
<script type='text/javascript'>
    $('#trangchu').css('border-bottom', '3px solid #e70000');
	$('#trangchu a').css('color', '#e70000');
</script>

        </div>
        <div class='footer'>
            <div class='text'>
                <p>Bản quyền thuộc về Đại học Bách Khoa Hà Nội</p>
                <p class='normal'>Địa chỉ: Số 1 Đại Cồ Việt, Hai Bà Trưng, Hà Nội</p>
            </div>
        </div>
        <script src='/bundles/jquery?v=eb2jXqSfUvTzglcYJmAPvAmCoKM7It9q8QvAflpVkwA1'></script>

        <script src='/bundles/bootstrap?v=M4Nk6kIOwMFflsEKET0iPL9i5YBqbzMzvUOrd8gyCnw1'></script>

        
        

        <!-- <button class='open-button' onclick='openForm()'>THÔNG TIN LIÊN HỆ</button> -->

        <!-- <div class='form-popup' id='myForm' style='display:block'> -->
            <!-- <form action='/action_page.php' class='form-container'> -->
                <!-- <p style='box-sizing: border-box; margin: 0px 0px 10px; font-family: &quot;Helvetica Neue&quot;, Helvetica, Arial, sans-serif; font-size: 20px; color: rgb(0, 0, 0);'> -->
                    <!-- <span style='box-sizing: border-box; font-weight: 700; color: rgb(0, 119, 179); outline: 0px; font-family: &quot;times new roman&quot;, serif;'><span style='box-sizing: border-box;'><span style='box-sizing: border-box; color: maroon;'>THÔNG TIN LIÊN HỆ</span></span></span> -->
                <!-- </p> -->
                <!-- <div class='content1' data-v-759c90ec='' style='box-sizing: inherit; color: rgb(0, 0, 0); font-family: &quot;Helvetica Neue&quot;, Helvetica, &quot;PingFang SC&quot;, &quot;Hiragino Sans GB&quot;, &quot;Microsoft YaHei&quot;, Arial, sans-serif; font-size: 14px;'> -->
                    <!-- <div class='contact_title' data-v-759c90ec='' style='box-sizing: inherit; font-weight: 700; text-transform: uppercase;'> -->
                        <!-- TRƯỜNG ĐẠI HỌC BÁCH KHOA HÀ NỘI <br/> -->
                        <!-- PHÒNG ĐÀO TẠO ĐẠI HỌC -->
                    <!-- </div> -->
                    <!-- <div data-v-759c90ec='' style='box-sizing: inherit;'> -->
                        <!-- <p data-v-759c90ec='' style='box-sizing: inherit; margin: 3px 0px;'> -->
                            <!-- Ph&ograve;ng 202, Nh&agrave; C1, Trường Đại học B&aacute;ch Khoa H&agrave; Nội -->
                        <!-- </p> -->
                        <!-- <p data-v-759c90ec='' style='box-sizing: inherit; margin: 3px 0px;'> -->
                            <!-- Điện thoại: 024 3869 2008 -->
                        <!-- </p> -->
                        <!-- <p data-v-759c90ec='' style='box-sizing: inherit; margin: 3px 0px;'> -->
                            <!-- Email: dt@hust.edu.vn -->
                        <!-- </p> -->
                    <!-- </div> -->
                <!-- </div> -->

                <!-- <button type='button' class='btn cancel' onclick='closeForm()'>Close</button> -->
            <!-- </form> -->
        <!-- </div> -->

        <!-- <script> -->
            <!-- function openForm() { -->
                <!-- document.getElementById('myForm').style.display = 'block'; -->
            <!-- } -->

            <!-- function closeForm() { -->
                <!-- document.getElementById('myForm').style.display = 'none'; -->
            <!-- } -->
        <!-- </script> -->
</body>
</html>

)";